#ifndef BHOOMI_H
#define BHOOMI_H

#include <QMainWindow>
#include "ui_bhoomi.h"
#include "vyasa/vyasa.h"
#include "shunya/shunya.h"
#include "drona/drona.h"
#include "yodha/yodha.h"
#include "vishnu/vishnu.h"

class Bhoomi : public QMainWindow
{
    Q_OBJECT
public:
    explicit Bhoomi(QWidget *parent = nullptr);
    void setConnections(Vyasa *vyasaInstance);
    ~Bhoomi();

private:
    Ui::ranbhoomi *ui;
    Vyasa *vyasa;
    Shunya *shunya;
    Drona *drona;
    Vishnu *vishnu;
    std::shared_ptr<std::vector<BlueBot>> pandav;
    std::shared_ptr<std::vector<YellowBot>> kaurav;
    std::shared_ptr<Ball> ball;
signals:
         // void configureBots();
};

#endif // BHOOMI_H
