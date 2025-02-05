#include "bhoomi.h"
#include "ui_bhoomi.h"

Bhoomi::Bhoomi(QWidget *parent)
    : QMainWindow{parent},
    ui(new Ui::ranbhoomi),
    vyasa(new Vyasa(this)),
    shunya(new Shunya(this)),
    drona(new Drona(this)),
    vishnu(new Vishnu(this))
{
    ui->setupUi(this);
    pandav = std::make_shared<std::vector<BlueBot>>();
    kaurav = std::make_shared<std::vector<YellowBot>>();
    ball = std::make_shared<Ball>(Qt::black, 5);

    // giving ownership of players and ball to kshetra and drona
    ui->bhoomi->setPlayers(pandav, kaurav);
    ui->bhoomi->setBall(ball);
    drona->setPlayers(pandav, kaurav);
    drona->setBall(ball);

    // connect(vyasa, &Vyasa::recievedState, ui->bhoomi, &Ranbhoomi::handleState);
    // // voronoi graph
    // connect(drona, &Drona::draw_graph, ui->bhoomi, &Ranbhoomi::handleGraph);
    // // make sure vyasa is connected to drona AFTER kshetra, since kshetra updates
    // // the bot position, and the new bot positions are used by drona
    // // forums online say not to rely on the ordering of slots but, idgaf
    // connect(vyasa, &Vyasa::recievedState, drona, &Drona::handleState);
    // connect(ui->actionreset, &QAction::triggered, shunya, &Shunya::setup);
}

void Bhoomi::setConnections(Vyasa* vyasaInstance){
    vyasa = vyasaInstance;
    connect(vyasa, &Vyasa::recievedState, ui->bhoomi, &Ranbhoomi::handleState);
    // connect(vyasa, &Vyasa::recievedState, drona, &Drona::handleState);
    connect(ui->actionreset, &QAction::triggered, shunya, &Shunya::setup);
}

Bhoomi::~Bhoomi(){
    delete ui;
    delete vyasa;
    delete shunya;
    delete drona;
    ui = nullptr;
    vyasa = nullptr;
    shunya = nullptr;
    drona = nullptr;
}
