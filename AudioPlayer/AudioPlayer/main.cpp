#include "AudioPlayer.h"
#include <QtWidgets/QApplication>

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);


    a.setStyle("fusion");

    AudioPlayer w;
    w.show();
    return a.exec();
}