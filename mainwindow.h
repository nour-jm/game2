#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    int check ();

    ~MainWindow();

private slots:


    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();





    void on_pushButton_10_clicked();

private:
    int index=0;
    int visit[9]= {0};
    enum {player1='x',player2='o'};
    int player=player1;
        bool winner=false;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
