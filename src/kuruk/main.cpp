#include "kuruk.h"
#include "bhoomi.h"
#include <QApplication>

int main(int argc, char **argv){
    QApplication a(argc, argv);

    Bhoomi bhoomi;
    Kuruk shetra;

    bhoomi.setConnections(shetra.vyasa);

    bhoomi.show();
    shetra.show();

    qDebug() << "executing...";
    return a.exec();
}
