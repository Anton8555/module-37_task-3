#ifndef REMOTECONTROLLERMAINWINDOW_H
#define REMOTECONTROLLERMAINWINDOW_H

#include <QMainWindow>

#include "../ui_RemoteController.h"

class RemoteControllerMainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit RemoteControllerMainWindow(QWidget *parent = nullptr);

    // initialization
    void init(const Ui::MainWindow &remoteController);

private:
    // status output component
    QTextBrowser *status_txt = nullptr;

    // channel number
    int channel;
    // volume level, as a percentage
    float volume;

    // the method of displaying the status on the display
    void show_the_status();

public slots:
    // handler for the "0" button click event
    void num0();
    // handler for the "1" button click event
    void num1();
    // handler for the "2" button click event
    void num2();
    // handler for the "3" button click event
    void num3();
    // handler for the "4" button click event
    void num4();
    // handler for the "5" button click event
    void num5();
    // handler for the "6" button click event
    void num6();
    // handler for the "7" button click event
    void num7();
    // handler for the "8" button click event
    void num8();
    // handler for the "9" button click event
    void num9();
    // handler for the "ch+" button click event
    void chNext();
    // handler for the "ch-" button click event
    void chPrevious();
    // handler for the "vol+" button click event
    void volPlus();
    // handler for the "vol-" button click event
    void volMinus();
};

#endif // REMOTECONTROLLERMAINWINDOW_H
