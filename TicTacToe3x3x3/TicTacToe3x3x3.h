#ifndef TicTacToe3x3x3_H
#define TicTacToe3x3x3_H

#include <stdlib.h>
#include <QMainWindow>
#include <QtDebug>
#include <QHoverEvent>
#include <QSignalMapper>
#include <string>
#include <iostream>
#include <QDebug>
#include <QString>
#include <QPixmap>
#include <QLabel>
#include <QPushButton>
#include <QIcon>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QMouseEvent>
#include <QPointF>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QMediaPlayer>


namespace Ui {
class TicTacToe3x3x3;
}

class TicTacToe3x3x3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit TicTacToe3x3x3(QWidget *parent = nullptr);
    ~TicTacToe3x3x3();

private slots:
    void on_newgame_clicked();                                              // starts a new game calls startgame()
    void pos0Clicked(int pos);                                              // determines the button clicked and where toplace the piece
    bool check_winner(int board[3][3][3], int player);                      // checks for a winner after a piece is placed
    void initialize_board(int board[3][3][3]);                              // initializes the 3x3x3 tictactoe board in memory
    void startgame();                                                       // sets up a new game
    void display_board(int board[3][3][3]);                                 // displays board is console. only used for testing
    bool makemove(int b, int r, int c, int p, int board[3][3][3]);          // places the move in memory
    void displaymove(QPixmap pixx, QPixmap pix_mapsml, int pos);            // shows the move made in our gui
    void on_reset_btn_clicked();

    void on_htp_clicked();

private:
    Ui::TicTacToe3x3x3 *ui;
    int pos, turn, player = rand()%2;
    int oscore_count = 0;
    int xscore_count = 0;
    bool winner;
    bool first_launch = true;
    bool game_started = false;
    QPixmap imageo, imagex, imageo_sml,imagex_sml;
    QGraphicsScene *scene;
    int board[3][3][3];
    QPushButton* board_left[27];
    QMediaPlayer* victory = new QMediaPlayer();
    QMediaPlayer* move = new QMediaPlayer();
    QMediaPlayer* error = new QMediaPlayer();
    QMediaPlayer* action = new QMediaPlayer();

    //used for positioning x and y values
    int pos_arrayb[27] = {
        0, 0, 0, 0, 0, 0, 0, 0, 0,
        1, 1, 1, 1, 1, 1, 1, 1, 1,
        2, 2, 2, 2, 2, 2, 2, 2, 2
      };
    int pos_arrayr[9] = {
        0, 0, 0, 1, 1, 1, 2, 2, 2,
      };
    int pos_arrayc[9] = {
        0, 1, 2, 0, 1, 2, 0, 1, 2,
      };
    int boardleft_labelx[3] = { 19, 101, 183 };
    int boardleft_labely[9] = {
        20, 101, 181,
        300, 381, 461,
        590, 671, 751 };
    int scene_posx[27] = {76,166,253,71,165,260,65,166,267,
                          76,165,250,70,167,260,63,167,267,
                         73,162,248,71,162,258,70,164,267};
    int scene_posy[27] = {9,9,9,54,54,54,101,101,101,
                          177,177,177,223,223,223,267,267,267,
                        343,343,343,388,388,388,434,434,434};

};
#endif // TicTacToe3x3x3
