#include "mainwindow.h"
#include <QApplication>
#include "Controller/controller.h"
#include <QDesktopWidget>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QRect rec = QApplication::desktop()->screenGeometry();
    int height = rec.height();
    int width = rec.width();
    Controller ctrl ;
   // ctrl.setWindowFlags(Qt::FramelessWindowHint);
    ctrl.setMinimumSize(1024, 576);
    ctrl.show();

    return a.exec();
}
