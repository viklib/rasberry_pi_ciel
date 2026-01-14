#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QLabel;
class QPushButton;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public :
    MainWindow(QWidget *parent = nullptr);

private :
    QLabel *label;
    QPushButton *button;
};

#endif // MAINWINDOW_H
