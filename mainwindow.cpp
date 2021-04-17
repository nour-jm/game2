#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFont>
char a[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
int MainWindow::check ()
{

            if (a[0][0]==a[0][1]&&a[0][1]==a[0][2]&&(a[0][0]=='x'||a[0][0]=='o'))
                return 1;
            if (a[1][0]==a[1][1]&&a[1][0]==a[1][2]&&(a[1][0]=='x'||a[1][0]=='o'))
              return 1;
            if (a[2][0]==a[2][1]&&a[2][1]==a[2][2]&&(a[2][0]=='x'||a[2][0]=='o'))
              return 1;
            if (a[0][0]==a[1][0]&&a[1][0]==a[2][0]&&(a[0][0]=='x'||a[0][0]=='o'))
                return 2;
            if (a[0][1]==a[1][1]&&a[0][1]==a[2][1]&&(a[0][1]=='x'||a[0][1]=='o'))
                return 2;
            if (a[0][2]==a[1][2]&&a[1][2]==a[2][2]&&(a[0][2]=='x'||a[0][2]=='o'))
                return 2;
            if (a[0][0]==a[1][1]&&a[1][1]==a[2][2]&&(a[0][0]=='x'||a[0][0]=='o'))
                return 3;
            if (a[0][2]==a[1][1]&&a[1][1]==a[2][0]&&(a[0][0]=='x'||a[0][0]=='o'))
                return 4;

return 0;

}


void MainWindow::on_pushButton_1_clicked()
{if (!winner){
    ui->pushButton_1->setStyleSheet("QPushButton{font-size: 53px;font-family: Arial;color:black;background-color:white;}");
    QFont font=ui->pushButton_1->font();
    font.setPointSize(25);
    if (visit[0]!=1)
    { visit[0]=1;
        if (player==player1)
         {  index++;
            a[0][0]='x';
     ui->pushButton_1->setText("X");
          player=player2;}
        else if (player==player2)
         {index++;
            ui->pushButton_1->setText("O");
             a[0][0]='o';
              player=player1;}}
if (check()==1){ui->pushButton_1->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
       ui->pushButton_2->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
       ui->pushButton_3->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
         ui->label_2->setText("Congratulations you win :) ");
 winner=true;}
else if (check()==2){ui->pushButton_1->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_4->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_7->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
     ui->label_2->setText("Congratulations you win :) ");
winner=true;}
else if (check()==3){ui->pushButton_1->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_5->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_9->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
     ui->label_2->setText("Congratulations you win :) ");
winner=true;}
else if (index==9)
{
ui->label_2->setText("No Winner");
}}}


void MainWindow::on_pushButton_2_clicked()
{if (!winner){
    ui->pushButton_2->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:black;background-color: white;}");
    QFont font=ui->pushButton_2->font();
    font.setPointSize(25);
    if (visit[1]!=1)
    { visit[1]=1;
        if (player==player1)
         {  index++;
            a[0][1]='x';
     ui->pushButton_2->setText("X");
          player=player2;}
        else if (player==player2)
         {index++;
            ui->pushButton_2->setText("O");
            a[0][1]='o';
              player=player1;}


    }
 if (check()==1){ui->pushButton_1->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
       ui->pushButton_2->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
       ui->pushButton_3->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
         ui->label_2->setText("Congratulations you win :) ");
 winner=true;}
else if (check()==2){ui->pushButton_2->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_5->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_8->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
     ui->label_2->setText("Congratulations you win :) ");
winner=true;}
 else if (index==9)
{
ui->label_2->setText("No Winner");
}  }

}

void MainWindow::on_pushButton_3_clicked()
{if (!winner){
    ui->pushButton_3->setStyleSheet("QPushButton{font-size: 53px;font-family: Arial;color: black;background-color:white;}");
    QFont font=ui->pushButton_3->font();
    font.setPointSize(25);
    if (visit[2]!=1)
    { visit[2]=1;
        if (player==player1)
         {  index++;
            a[0][2]='x';
     ui->pushButton_3->setText("X");
          player=player2;}
        else if (player==player2)
         {index++;
            ui->pushButton_3->setText("O");
            a[0][2]='o';
              player=player1;}


    }
 if (check()==1){ui->pushButton_1->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
       ui->pushButton_2->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
       ui->pushButton_3->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
       ui->label_2->setText("Congratulations you win :) ");
 winner=true;}
else if (check()==2){ui->pushButton_3->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_6->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_9->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->label_2->setText("Congratulations you win :) ");
winner=true;}

else if (check()==4){ui->pushButton_3->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_5->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_7->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->label_2->setText("Congratulations you win :) ");
winner=true;}
else  if (index==9)
{
ui->label_2->setText("No Winner");
} }
}

void MainWindow::on_pushButton_4_clicked()
{if (!winner){
    ui->pushButton_4->setStyleSheet("QPushButton{font-size: 53px;font-family: Arial;color: black;background-color:white }");
    QFont font=ui->pushButton_4->font();
    font.setPointSize(25);
    if (visit[3]!=1)
    { visit[3]=1;
        if (player==player1)
         {  index++;
            a[1][0]='x';
     ui->pushButton_4->setText("X");
          player=player2;}
        else if (player==player2)
         {index++;
            ui->pushButton_4->setText("O");
            a[1][0]='o';
              player=player1;}


    }
 if (check()==1){ui->pushButton_4->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
       ui->pushButton_5->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
       ui->pushButton_6->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
       ui->label_2->setText("Congratulations you win :) ");
 winner=true;}
else if (check()==2){ui->pushButton_1->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_4->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_7->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->label_2->setText("Congratulations you win :) ");
winner=true;}

     else if (index==9)
    {
    ui->label_2->setText("No Winner");
}}}

void MainWindow::on_pushButton_5_clicked()
{if (!winner){
    ui->pushButton_5->setStyleSheet("QPushButton{font-size: 53px;font-family: Arial;color: black;background-color: white;}");
    QFont font=ui->pushButton_5->font();
    font.setPointSize(25);
    if (visit[4]!=1)
    { visit[4]=1;
        if (player==player1)
         {  index++;
            a[1][1]='x';
     ui->pushButton_5->setText("X");
          player=player2;}
        else if (player==player2)
         {index++;
            ui->pushButton_5->setText("O");
            a[1][1]='o';
              player=player1;}


    }
 if (check()==1){ui->pushButton_5->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
       ui->pushButton_4->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
       ui->pushButton_6->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
        ui->label_2->setText("Congratulations you win :) ");
 winner=true;}
else if (check()==2){ui->pushButton_5->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_2->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_8->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->label_2->setText("Congratulations you win :) ");
winner=true;}
else if  (check()==3){ui->pushButton_1->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_5->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_9->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->label_2->setText("Congratulations you win :) ");
winner=true;}
else if (check()==4){ui->pushButton_3->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_5->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_7->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->label_2->setText("Congratulations you win :) ");
winner=true;}
else if (index==9)
    {
    ui->label_2->setText("No Winner");
}}}


void MainWindow::on_pushButton_6_clicked()
{if (!winner){
    ui->pushButton_6->setStyleSheet("QPushButton{font-size: 53px;font-family: Arial;color:black;background-color: white;}");
    QFont font=ui->pushButton_6->font();
    font.setPointSize(25);
    if (visit[5]!=1)
    { visit[5]=1;
        if (player==player1)
         {  index++;
            a[1][2]='x';
     ui->pushButton_6->setText("X");
          player=player2;}
        else if (player==player2)
         {index++;
            ui->pushButton_6->setText("O");
            a[1][2]='o';
              player=player1;}


    }
 if (check()==1){ui->pushButton_6->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
       ui->pushButton_4->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
       ui->pushButton_5->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
        ui->label_2->setText("Congratulations you win :) ");
 winner=true;}
else if (check()==2){ui->pushButton_6->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_3->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_9->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->label_2->setText("Congratulations you win :) ");
winner=true;}
else if (index==9)
{
ui->label_2->setText("No Winner");}}}

void MainWindow::on_pushButton_7_clicked()
{if (!winner){
    ui->pushButton_7->setStyleSheet("QPushButton{font-size: 53px;font-family: Arial;color: black;background-color: white}");
    QFont font=ui->pushButton_7->font();
    font.setPointSize(25);
    if (visit[6]!=1)
    { visit[6]=1;
        if (player==player1)
         {  index++;
            a[2][0]='x';
     ui->pushButton_7->setText("X");
          player=player2;}
        else if (player==player2)
         {index++;
            ui->pushButton_7->setText("O");
            a[2][0]='o';
              player=player1;}}
 if (check()==1){ui->pushButton_7->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
       ui->pushButton_8->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
       ui->pushButton_9->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
        ui->label_2->setText("Congratulations you win :) ");
 winner=true;}
else if (check()==2){ui->pushButton_1->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_4->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_7->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->label_2->setText("Congratulations you win :) ");
winner=true;}
else if (check()==4){ui->pushButton_7->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_5->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_3->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->label_2->setText("Congratulations you win :) ");
winner=true;}
else if (index==9)
    {
    ui->label_2->setText("No Winner");
}}}



void MainWindow::on_pushButton_8_clicked()
{if (!winner){
    ui->pushButton_8->setStyleSheet("QPushButton{font-size: 53px;font-family: Arial;color: black;background-color: white;}");
    QFont font=ui->pushButton_8->font();
    font.setPointSize(25);
    if (visit[7]!=1)
    { visit[7]=1;
        if (player==player1)
         {  index++;
            a[2][1]='x';
     ui->pushButton_8->setText("X");
          player=player2;}
        else if (player==player2)
         {index++;
            ui->pushButton_8->setText("O");
            a[2][1]='o';
              player=player1;}


    }
 if (check()==1){ui->pushButton_7->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
       ui->pushButton_8->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
       ui->pushButton_9->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
        ui->label_2->setText("Congratulations you win :) ");
 winner=true;}
else if (check()==2){ui->pushButton_8->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_5->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_2->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->label_2->setText("Congratulations you win :) ");
winner=true;}
else if (index==9)
{ui->label_2->setText("No Winner"); }}}
void MainWindow::on_pushButton_9_clicked()
{if (!winner){
    ui->pushButton_9->setStyleSheet("QPushButton{font-size: 53px;font-family: Arial;color: black;background-color:white;}");
    QFont font=ui->pushButton_9->font();
    font.setPointSize(25);
    if (visit[8]!=1)
    { visit[8]=1;
        if (player==player1)
         {  index++;
            a[2][2]='x';
     ui->pushButton_9->setText("X");
          player=player2;}
        else if (player==player2)
         {index++;
            ui->pushButton_9->setText("O");
            a[2][2]='o';
              player=player1;}


    }
 if (check()==1){ui->pushButton_7->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
       ui->pushButton_8->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
       ui->pushButton_9->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
        ui->label_2->setText("Congratulations you win :) ");
 winner=true;}
if (check()==2){ui->pushButton_3->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_6->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_9->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->label_2->setText("Congratulations you win :) ");
winner=true;}
if (check()==3){ui->pushButton_1->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_5->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_9->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->label_2->setText("Congratulations you win :) ");
winner=true;}
else if (index==9)
{
ui->label_2->setText("No Winner");
}}}



void MainWindow::on_pushButton_10_clicked()
{
       ui->pushButton_1->setStyleSheet("QPushButton{Arial;color:black;background-color: rgb(230, 230, 230);}");ui->pushButton_1->setText("");
       ui->pushButton_2->setStyleSheet("QPushButton{Arial;color:black;background-color: rgb(230, 230, 230);}"); ui->pushButton_2->setText("");
       ui->pushButton_3->setStyleSheet("QPushButton{Arial;color:black;background-color: rgb(230, 230, 230);}"); ui->pushButton_3->setText("");
       ui->pushButton_4->setStyleSheet("QPushButton{Arial;color:black;background-color: rgb(230, 230, 230);}"); ui->pushButton_4->setText("");
       ui->pushButton_5->setStyleSheet("QPushButton{Arial;color:black;background-color: rgb(230, 230, 230);}"); ui->pushButton_5->setText("");
       ui->pushButton_6->setStyleSheet("QPushButton{Arial;color:black;background-color: rgb(230, 230, 230);}"); ui->pushButton_6->setText("");
       ui->pushButton_7->setStyleSheet("QPushButton{Arial;color:black;background-color: rgb(230, 230, 230);}"); ui->pushButton_7->setText("");
       ui->pushButton_8->setStyleSheet("QPushButton{Arial;color:black;background-color: rgb(230, 230, 230);}"); ui->pushButton_8->setText("");
       ui->pushButton_9->setStyleSheet("QPushButton{Arial;color:black;background-color: rgb(230, 230, 230);}"); ui->pushButton_9->setText("");
       index=0;
       player=player1;
       int k=49;
       for (int i=0;i<9;i++)
           visit[i]=0;
       for (int i=0;i<3;i++)
       {for (int j=0;j<3;j++)
           {a[i][j]=k;
                 k++;}}
        ui->label_2->setText("");
        winner=false;

}
