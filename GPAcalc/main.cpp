#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setApplicationName("GPA Calculator");
    MainWindow w;
    w.show();
    return a.exec();
}
