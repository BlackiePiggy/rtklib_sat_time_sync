#include "plotmain.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Plot* w = new Plot();
    w->show();

    return a.exec();
}
