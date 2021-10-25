#include <QApplication>
#include "MyWindow.h"

int main( int argc, char* argv[])
{
    QApplication app(argc, argv);
    MyWindow window;
    window.changerLargeur(50);
    window.show();

    return app.exec();
}
