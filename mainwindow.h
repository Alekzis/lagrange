#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    double x[5];//array for x's rows
    double fx[5];//array for y's rows


private:
    Ui::MainWindow *ui;

public slots:
    void ejecutar();
    void borrar();

};

#endif // MAINWINDOW_H
