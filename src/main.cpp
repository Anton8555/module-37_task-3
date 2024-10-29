#include <QApplication>

#include "../ui_RemoteController.h"
#include "RemoteControllerMainWindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // creating objects
    RemoteControllerMainWindow window(nullptr);
    Ui::MainWindow RemoteController;
    // initializing objects
    RemoteController.setupUi(&window);
    window.init(RemoteController);
    // output of the main window
    window.show();

    return a.exec();
}
