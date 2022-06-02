#include "Project_Scarlet.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Project_Scarlet w;
    w.show();
    return a.exec();
}
