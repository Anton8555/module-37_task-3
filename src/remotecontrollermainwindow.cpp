#include "remotecontrollermainwindow.h"

RemoteControllerMainWindow::RemoteControllerMainWindow(QWidget *parent)
    : QMainWindow{parent}
{}

void RemoteControllerMainWindow::init(const Ui::MainWindow &remoteController)
{
    status_txt = remoteController.status_txt;
    channel = 0;
    volume = 0;
    show_the_status();
}

void RemoteControllerMainWindow::show_the_status()
{
    status_txt->setText(
        "Канал: " + QString::number(channel) + "\n" +
        "Громкость: " + QString::number(volume) + "%\n"
    );
}

void RemoteControllerMainWindow::num0()
{
    channel = 0;
    show_the_status();
}

void RemoteControllerMainWindow::num1()
{
    channel = 1;
    show_the_status();
}

void RemoteControllerMainWindow::num2()
{
    channel = 2;
    show_the_status();
}

void RemoteControllerMainWindow::num3()
{
    channel = 3;
    show_the_status();
}

void RemoteControllerMainWindow::num4()
{
    channel = 4;
    show_the_status();
}

void RemoteControllerMainWindow::num5()
{
    channel = 5;
    show_the_status();
}

void RemoteControllerMainWindow::num6()
{
    channel = 6;
    show_the_status();
}

void RemoteControllerMainWindow::num7()
{
    channel = 7;
    show_the_status();
}

void RemoteControllerMainWindow::num8()
{
    channel = 8;
    show_the_status();
}

void RemoteControllerMainWindow::num9()
{
    channel = 9;
    show_the_status();
}

void RemoteControllerMainWindow::chNext()
{
    if(++channel > 9)
        channel = 0;
    show_the_status();
}

void RemoteControllerMainWindow::chPrevious()
{
    if(--channel < 0)
        channel = 9;
    show_the_status();
}

void RemoteControllerMainWindow::volPlus()
{
    volume += 15;
    if(volume > 100)
        volume = 100;
    show_the_status();
}

void RemoteControllerMainWindow::volMinus()
{
    volume -= 15;
    if(volume < 0)
        volume = 0;
    show_the_status();
}
