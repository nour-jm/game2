#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFont>
#include "game.h"
#include<QPushButton>
game p;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    connect(ui->pushButton_1,SIGNAL(released()),this,SLOT(p.startgame(ui->pushButton_1)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_1_clicked(){

  p.startgame(ui->pushButton_1);
  p.setvalues(0,0,0);
  p.draw(button1);

}
void MainWindow::on_pushButton_2_clicked(){
  p.startgame(ui->pushButton_2);
  p.setvalues(0,1,1);
  p.draw(button2);

}
void MainWindow::on_pushButton_3_clicked(){
   p.startgame(ui->pushButton_3);
   p.setvalues(0,2,2);
   p.draw(button3);
}
void MainWindow::on_pushButton_4_clicked(){
  p.startgame(ui->pushButton_4);
  p.setvalues(1,0,3);
  p.draw(button4);
}

void MainWindow::on_pushButton_5_clicked(){
  p.startgame(ui->pushButton_5);
  p.setvalues(1,1,4);
  p.draw(button5);

}
void MainWindow::on_pushButton_6_clicked(){
  p.startgame(ui->pushButton_6);
  p.setvalues(1,2,5);
  p.draw(button6);
}
void MainWindow::on_pushButton_7_clicked(){
  p.startgame(ui->pushButton_7);
  p.setvalues(2,0,6);
  p.draw(button7);
}
void MainWindow::on_pushButton_8_clicked(){
  p.startgame(ui->pushButton_8);
  p.setvalues(2,1,7);
  p.draw(button8);
}
void MainWindow::on_pushButton_9_clicked(){
  p.startgame(ui->pushButton_9);
  p.setvalues(2,2,8);
  p.draw(button9);
}

void MainWindow::on_pushButton_playaAgain_clicked(){
    p.playagain();
}


