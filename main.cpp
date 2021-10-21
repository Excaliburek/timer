#include "okienko_1.h"
#include <QWidget>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    okienko1 w;
    w.show();
    return a.exec();
}
