#include "smp.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SMP w;
    w.show();
    return a.exec();
}
