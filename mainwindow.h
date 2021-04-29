#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "game.h"
#include <QMainWindow>
#include<QPushButton>
QT_BEGIN_NAMESPACE
#include "game.h"
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void processInput();
    void update();
    void render();

    ~MainWindow();



private :
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_playaAgain_clicked();
public Q_SLOTS :


private:
    Ui::MainWindow *ui;
    enum{button1, button2, button3, button4, button5, button6, button7, button8, button9, button_playAgain, button0};

};
#endif // MAINWINDOW_H
