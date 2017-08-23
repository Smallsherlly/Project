#include <QtGui/QApplication>
#include "hdusys.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    hduSys w;
    w.show();
    
    return a.exec();
}
