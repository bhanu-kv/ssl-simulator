#include "ranbhoomi.h"
#include <google/protobuf/repeated_field.h>
#include <QNetworkDatagram>
#include <cmath>
#include <QString>
#define BALL_RADIUS 5
#define ROBOT_RADIUS 10
#define LOG qDebug() << "[Ranbhoomi] : "

inline QGraphicsEllipseItem* addCircle_(QGraphicsScene *scene, const QPointF &center, int radius, QColor color)
{
    //internal function to draw a circle
    //the coordinate system of QGraphicsScene is based on top-left corner as origin and an inverted y-axis
    QRectF bounding_rect = QRectF(center.x() - radius, center.y() - radius, 2*radius, 2*radius);
    return scene->addEllipse(bounding_rect, QPen(), QBrush(color));
}

inline QGraphicsLineItem* addLine_(QGraphicsScene *scene, const QPointF &point1, const QPointF &point2, int width)
{
    return scene->addLine(QLineF(point1, point2), QPen(QBrush(Qt::white), width));
}

inline QGraphicsEllipseItem* addArc_(QGraphicsScene *scene, const QPointF center, int radius, int width)
{
    QRectF bounding_rect = QRectF(center.x() - radius, center.y() - radius, 2*radius, 2*radius);
    return scene->addEllipse(bounding_rect, QPen(QBrush(Qt::white), width));
}

inline QGraphicsEllipseItem* addGridPoint_(QGraphicsScene *scene, const QPointF center, int radius, int width, float intensity)
{
    QRectF bounding_rect = QRectF(center.x() - radius, center.y() - radius, 2*radius, 2*radius);

    // Base red color
    QColor baseColor = Qt::red;

    // Clamp the value to a reasonable range, e.g., 0 to 200
    float value;

    if(intensity <= 0){
        value = 0;
    }
    else if(intensity >= 200){
        value = 200;
    }
    else{
        value = intensity;
    }

    // Higher value -> darker shade, lower value -> lighter shade
    QColor adjustedColor;
    if (value > 100) {
        adjustedColor = baseColor.darker(value); // Darker for values > 100
    } else {
        adjustedColor = baseColor.lighter(200 - value); // Lighter for values <= 100
    }

    return scene->addEllipse(bounding_rect, QPen(QBrush(adjustedColor), width));
}

inline QPointF Ranbhoomi::transformToScene(QPointF &&point)
{
    //converting to cm by dividing 10
    return QPointF(point.x()/10 + scene->width()/2, point.y()/10 + scene->height()/2);
}

Ranbhoomi::Ranbhoomi(QWidget *parent):
    QGraphicsView(parent),
    painter(new QPainter()),
    frame(0),
    scene(new QGraphicsScene(this))
{
    scene_mantri = std::make_shared<std::vector<Mantri>>();
}

Ranbhoomi::~Ranbhoomi()
{
    delete painter;
    delete scene;
    painter = nullptr;
    scene = nullptr;
}

inline QPointF vecToPoint(const Vector2f &v){
    return QPoint(v.x(), v.y());
}

inline QRectF boundingSquare(const QPointF &center, int half_side)
{
    return QRectF(center.x() - half_side, center.y() - half_side, 2*half_side, 2*half_side);
}

void Ranbhoomi::setPlayers(std::shared_ptr<std::vector<BlueBot>> pandav,std::shared_ptr<std::vector<YellowBot>> kaurav)
{
    // giving ownership to Ranbhoomi
    scene_pandav = pandav;
    scene_kaurav = kaurav;
}

void Ranbhoomi::setBall(std::shared_ptr<Ball> ball)
{
    scene_ball = ball;
}

// void Ranbhoomi::setGrid(std::shared_ptr<Mantri> grid)
// {
//     scene_mantri = grid;
// }

void Ranbhoomi::handleGraph(std::vector<QPointF> *vertices){
    LOG << "drawing" << vertices->size();
    if(vertices->size() == 0)return;
    for(auto line: lines){scene->removeItem(line);}
    lines.clear();
    for(int i=0;i < vertices->size() - 1; ++i){
        LOG << vertices->at(i);
        lines.append(addLine_(this->scene, vertices->at(i), vertices->at(i+1), 1));
    }
}

void Ranbhoomi::handleState(QByteArray *buffer)
{
    static bool scene_set = false;
    //slot when message received by vyasa, draws the robots
    if(state.ParseFromArray(buffer->data(), buffer->size())){
        if(state.has_geometry()){
            field_geometry = state.geometry();
            qint32 field_width = field_geometry.field().field_length(); //refers to x axis
            qint32 field_height = field_geometry.field().field_width(); //refers to y axis

            //drawing field
            setGround(field_width, field_height);
            setFieldLines(field_geometry.field());
        }
        if(state.has_detection()){
            setHotMap();

            //drawing ball
            if(state.detection().balls_size() != 0){
                auto ball = state.detection().balls(0);
                if(!ball_init_){
                    *scene_ball = Ball(transformToScene(QPointF(ball.x(), ball.y())), scene);
                    ball_init_ = true;
                }else{
                    scene_ball->updatePosition(transformToScene(QPointF(ball.x(), ball.y())));
                }
            }else{
                LOG << "ball not there! paying respects";
            }

            //drawing robots
            //blue bots
            if(state.detection().robots_blue_size() != 0){
                auto pandav = state.detection().robots_blue();
                for(auto itr=pandav.begin(); itr != pandav.end(); ++itr){
                    auto bot = std::find_if(scene_pandav->begin(), scene_pandav->end(), [&](BlueBot &b){return b.id == itr->robot_id();});
                    if(bot == scene_pandav->end()){
                        LOG << "adding robot " << itr->robot_id();
                        scene_pandav->push_back(BlueBot(scene,transformToScene(QPointF(itr->x(), itr->y())), itr->orientation(), itr->robot_id()));
                        continue;
                    }
                    bot->updatePosition(transformToScene(QPointF(itr->x(), itr->y())), itr->orientation());
                }
            }else{
                LOG << "blue bots not there! paying respects";
            }

            //yellow bots
            if(state.detection().robots_yellow_size() != 0){
                auto kaurav = state.detection().robots_yellow();
                for(auto itr=kaurav.begin(); itr != kaurav.end(); ++itr){
                    auto bot = std::find_if(scene_kaurav->begin(), scene_kaurav->end(), [&](YellowBot &b){return b.id == itr->robot_id();});
                    if(bot == scene_kaurav->end()){
                        LOG << "adding robot " << itr->robot_id();
                        scene_kaurav->push_back(YellowBot(scene,transformToScene(QPoint(itr->x(), itr->y())), itr->orientation(), itr->robot_id()));
                        continue;
                    }
                    bot->updatePosition(transformToScene(QPoint(itr->x(), itr->y())), itr->orientation());
                }
            }else{
                LOG << "yellow bots not there! paying respects";
            }

            if(!scene_set){
                setScene(scene);
                scene_set = true;
            }
        }
    }
}


void Ranbhoomi::setGround(qint32 width, qint32 height)
{
    //sets the ground and field color with dimensions, the length received should be in mm
    static bool background_init_ = false;
    if(background_init_) return;
    scene->setSceneRect(QRectF(0,0,width/10, height/10));
    scene->setBackgroundBrush(QColor(0,100,50));
    scene->addRect(QRectF(0,0,width/10, height/10), QPen(), Qt::darkGreen);
    background_init_ = true;
}


void Ranbhoomi::setFieldLines(const SSL_GeometryFieldSize &field_info)
{
    //rn i am not storing the field lines since they are static
    static bool lines_init_ = false;
    if(lines_init_) return;
    auto lines = field_info.field_lines();
    for(auto itr=lines.begin(); itr != lines.end(); ++itr){
        addLine_(scene, transformToScene(vecToPoint(itr->p1())), transformToScene(vecToPoint(itr->p2())), itr->thickness());
    }

    auto arcs = field_info.field_arcs();
    for(auto itr=arcs.begin(); itr != arcs.end(); ++itr){
        addArc_(scene, transformToScene(vecToPoint(itr->center())), itr->radius()/10, itr->thickness());
    }

    lines_init_ = true;
}


void Ranbhoomi::setHotMap()
{
    static bool map_init_ = false;

    if(map_init_ == false)
    {
        for(int i = -4500; i <= 4500; i+=100){
            for(int j = -3000; j<= 3000; j+=100){
                float color_value = 0;
                scene_mantri->push_back(Mantri(scene,transformToScene(QPointF(i, j)), color_value/1000000, 5, 5));
            }
        }

        map_init_ = true;
        return;
    }

    // auto pandav = state.detection().robots_blue();
    // for(auto itr=pandav.begin(); itr!=pandav.end(); ++itr){
    //     LOG << itr->x()/10 << " " << itr->y()/10;
    // }

    int std = 5;

    for(auto i = 0; i < scene_mantri->size(); i++)
    {
        float color_value = 0;

        //blue bots
        if(state.detection().robots_blue_size() != 0){
            auto pandav = state.detection().robots_blue();
            for(auto itr=pandav.begin(); itr != pandav.end(); ++itr){
                // float x_rel = (scene_mantri->at(index).getx() - itr->x()/10)/450;
                // float y_rel = (scene_mantri->at(index).gety() - itr->y()/10)/300;

                // float num = -1*(x_rel*x_rel + y_rel*y_rel)/(2*std*std);
                // color_value += (1/(6.28*std*std))*exp(num);

                color_value += abs(scene_mantri->at(i).getx() - (itr->x()/10+scene->width()/2)) + abs(scene_mantri->at(i).gety() - (itr->y()/10+scene->height()/2));
            }
        }

        // LOG << color_value;
        color_value /= 5;

        color_value = 500 - color_value;

        scene_mantri->at(i).updateColor(color_value);
    }
    // for(int i = 0; i <= 9000; i+=100)
    // {
    //     for(int j = 0; j<= 6000; j+=100)
    //     {
    //         float color_value = 0;
    //         int index = i*61/100 + j/100;

    //         //blue bots
    //         if(state.detection().robots_blue_size() != 0){
    //             auto pandav = state.detection().robots_blue();
    //             for(auto itr=pandav.begin(); itr != pandav.end(); ++itr){
    //                 // float x_rel = (scene_mantri->at(index).getx() - itr->x()/10)/450;
    //                 // float y_rel = (scene_mantri->at(index).gety() - itr->y()/10)/300;

    //                 // float num = -1*(x_rel*x_rel + y_rel*y_rel)/(2*std*std);
    //                 // color_value += (1/(6.28*std*std))*exp(num);

    //                 color_value += abs(scene_mantri->at(index).getx() - itr->x()/10) + abs(scene_mantri->at(index).gety() - itr->y()/10);
    //             }
    //         }

    //         // LOG << color_value;
    //         color_value /= 5;

    //         color_value = 1500 - color_value;

    //         scene_mantri->at(index).updateColor(color_value/10);
    //         // scene_mantri->push_back(Mantri(scene,transformToScene(QPointF(i, j)), color_value/1000000000, 20, 1));
    //         // addArc_(scene, transformToScene(QPointF(i, j)), 1, 20, color_value/1000000000);
    //     }
    // }
}
