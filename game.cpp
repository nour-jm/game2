#include "game.h"
#include "mainwindow.h"
#include <QDebug>
#include<QMainWindow>
#include<QPushButton>
game::game():ui(new Ui::MainWindow)
{

}
int game::check (){
  if (a[0][0]==a[0][1]&&a[0][1]==a[0][2]&&(a[0][0]=='x'||a[0][0]=='o'))
    return horizontal;
  if (a[1][0]==a[1][1]&&a[1][0]==a[1][2]&&(a[1][0]=='x'||a[1][0]=='o'))
    return horizontal;
  if (a[2][0]==a[2][1]&&a[2][1]==a[2][2]&&(a[2][0]=='x'||a[2][0]=='o'))
    return horizontal;
  if (a[0][0]==a[1][0]&&a[1][0]==a[2][0]&&(a[0][0]=='x'||a[0][0]=='o'))
    return vertical;
  if (a[0][1]==a[1][1]&&a[0][1]==a[2][1]&&(a[0][1]=='x'||a[0][1]=='o'))
    return vertical;
  if (a[0][2]==a[1][2]&&a[1][2]==a[2][2]&&(a[0][2]=='x'||a[0][2]=='o'))
    return vertical;
  if (a[0][0]==a[1][1]&&a[1][1]==a[2][2]&&(a[0][0]=='x'||a[0][0]=='o'))
    return diameter;
  if (a[0][2]==a[1][1]&&a[1][1]==a[2][0]&&(a[0][0]=='x'||a[0][0]=='o'))
    return rdiameter;

   return NoMatch;
}
void game::startgame(QPushButton *button){
    if (winner!=true){
      if (player==player1)
        button->setText("x");
      else
        button->setText("o");
    }

  }
void game::setvalues(int row , int col, int position){
  if (winner!=true){
  if (visit[position]!=1){
    visit[position]=1;
    if (player==player1){
      a[row][col]='x';
      player=player2;
}
    else {
      a[row][col]='o';
      player=player1;
    }
  }
  }
}
void game::playagain()
{
    draw(button_playAgain);
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
    winner=false;
    player=player1;
    char key='1';
    for (int i=0;i<9;i++)
      visit[i]=0;
    for (int i=0;i<3;i++){
      for (int j=0;j<3;j++){
         a[i][j]=key;
         key++;
       }
     }
  }

void game::draw(int keyindex){
  switch (keyindex) {
    case button1 :
      if (check()==horizontal){
        ui->pushButton_1->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
        ui->pushButton_2->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
        ui->pushButton_3->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
        ui->label_2->setText("Congratulations you win :) ");
        winner=true;
}
     else if (check()==vertical){
       ui->pushButton_1->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
       ui->pushButton_4->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
       ui->pushButton_7->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
       ui->label_2->setText("Congratulations you win :) ");
       winner=true;
}
     else if (check()==diameter){
       ui->pushButton_1->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
       ui->pushButton_5->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
       ui->pushButton_9->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
       ui->label_2->setText("Congratulations you win :) ");
      winner=true;
}
     else if (check()==NoMatch&&index==9){
       ui->label_2->setText("No Winner");
}
     break;
case button2 :
  if (check()==horizontal){
    ui->pushButton_1->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red}");
    ui->pushButton_2->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;}");
    ui->pushButton_3->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;}");
    ui->label_2->setText("Congratulations you win :) ");
    winner=true;
}
  else if (check()==vertical){
    ui->pushButton_2->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_5->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_8->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->label_2->setText("Congratulations you win :) ");
    winner=true;
}
  else if (check()==NoMatch&&index==9){
      ui->label_2->setText("No Winner");

}
  break;
case button3:
  if (check()==horizontal){
    ui->pushButton_1->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_2->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_3->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->label_2->setText("Congratulations you win :) ");
    winner=true;
}
  else if (check()==vertical){
    ui->pushButton_3->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_6->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_9->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->label_2->setText("Congratulations you win :) ");
    winner=true;
}
  else if (check()==rdiameter){ui->pushButton_3->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_5->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_7->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->label_2->setText("Congratulations you win :) ");
   winner=true;
}
  break;
case  button4 :
  if (check()==horizontal){
    ui->pushButton_4->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_5->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_6->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->label_2->setText("Congratulations you win :) ");
    winner=true;
}
  else if (check()==vertical){
    ui->pushButton_1->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_4->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_7->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->label_2->setText("Congratulations you win :) ");
    winner=true;
}

  else if (check()==NoMatch&&index==9){
    ui->label_2->setText("No Winner");

}
  break;
case button5 :
  if (check()==horizontal){
    ui->pushButton_5->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_4->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_6->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->label_2->setText("Congratulations you win :) ");
    winner=true;
}
   else if (check()==vertical){
     ui->pushButton_5->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
     ui->pushButton_2->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
     ui->pushButton_8->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
     ui->label_2->setText("Congratulations you win :) ");
     winner=true;
}
   else if  (check()==diameter){
     ui->pushButton_1->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
     ui->pushButton_5->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
     ui->pushButton_9->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
     ui->label_2->setText("Congratulations you win :) ");
     winner=true;
}
   else if (check()==rdiameter){ui->pushButton_3->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
     ui->pushButton_5->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
     ui->pushButton_7->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
     ui->label_2->setText("Congratulations you win :) ");
     winner=true;
}
   else if (check()==NoMatch&&index==9){
     ui->label_2->setText("No Winner");
}
   break;
case button6 :
  if (check()==horizontal){
    ui->pushButton_6->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_4->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_5->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->label_2->setText("Congratulations you win :) ");
    winner=true;
}
  else if (check()==vertical){
    ui->pushButton_6->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_3->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_9->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->label_2->setText("Congratulations you win :) ");
    winner=true;
}
  else if (check()==NoMatch&&index==9){
    ui->label_2->setText("No Winner");
}
  break;
case button7 :
  if (check()==horizontal){
    ui->pushButton_7->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_8->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_9->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->label_2->setText("Congratulations you win :) ");
    winner=true;
}
  else if (check()==vertical){
   ui->pushButton_1->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_4->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->pushButton_7->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
   ui->label_2->setText("Congratulations you win :) ");
   winner=true;
}
  else if (check()==rdiameter){
    ui->pushButton_7->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_5->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_3->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->label_2->setText("Congratulations you win :) ");
    winner=true;
}
else if (check()==NoMatch&&index==9){
    ui->label_2->setText("No Winner");
}
break;
case button8:
  if (check()==horizontal){
    ui->pushButton_7->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_8->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_9->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->label_2->setText("Congratulations you win :) ");
    winner=true;
}
  else if (check()==vertical){ui->pushButton_8->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_5->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_2->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->label_2->setText("Congratulations you win :) ");
}
  else if (check()==NoMatch&&index==9){
    ui->label_2->setText("No Winner");
}
  break;
case button9 :
  if (check()==horizontal){
    ui->pushButton_7->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_8->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_9->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->label_2->setText("Congratulations you win :) ");
    winner=true;
}
  if (check()==vertical){
    ui->pushButton_3->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_6->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_9->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->label_2->setText("Congratulations you win :) ");
    winner=true;
}
  if (check()==diameter){
    ui->pushButton_1->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_5->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->pushButton_9->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:red;background-color: white;}");
    ui->label_2->setText("Congratulations you win :) ");
    winner=true;
}
  else if (check()==NoMatch&&index==9){
    ui->label_2->setText("No Winner");
}
  break;
case button_playAgain:
  ui->label_2->setText("");
  ui->pushButton_1->setText("");
  ui->pushButton_2->setText("");
  ui->pushButton_3->setText("");
  ui->pushButton_4->setText("");
  ui->pushButton_5->setText("");
  ui->pushButton_6->setText("");
  ui->pushButton_7->setText("");
  ui->pushButton_8->setText("");
  ui->pushButton_9->setText("");
  ui->pushButton_1->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:black;background-color: white;}");
  ui->pushButton_2->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:black;background-color: white;}");
  ui->pushButton_3->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:black;background-color: white;}");
  ui->pushButton_4->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:black;background-color: white;}");
  ui->pushButton_5->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:black;background-color: white;}");
  ui->pushButton_6->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:black;background-color: white;}");
  ui->pushButton_7->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:black;background-color: white;}");
  ui->pushButton_8->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:black;background-color: white;}");
  ui->pushButton_9->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:black;background-color: white;}");
  ui->label_2->setStyleSheet("QPushButton{font-size: 60px;font-family: Arial;color:rgb(255, 170, 0);}");
  player=player1;
  break;
}
}
