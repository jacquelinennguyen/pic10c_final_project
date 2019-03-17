#include "madlibs.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MadLibs w;
    w.show();

    return a.exec();
}
