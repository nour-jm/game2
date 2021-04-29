#ifndef GAME_H
#define GAME_H
#include<QPushButton>
#include "mainwindow.h"
#include "ui_mainwindow.h"
namespace Ui { class MainWindow; }
class game
{
public:
    game();
public Q_SLOTS :
    int   check ();
    void  setvalues(int, int, int);
    void  startgame(QPushButton *);
    void  draw(int);
    void  playagain();
   public:
   int  index;
    enum {player1,player2};
    enum {vertical , horizontal, diameter, rdiameter, NoMatch};
    enum{button1, button2, button3, button4, button5, button6, button7, button8, button9, button_playAgain, button0};
    int  player=player;
    char   a[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    bool  winner=true;
    int  visit[9]={0};
    Ui::MainWindow *ui;
};


#endif // GAME_H
