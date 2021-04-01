#include "TicTacToe3x3x3.h"
#include "ui_TicTacToe3x3x3.h"
#include "howtoplay.h"


using namespace std;

TicTacToe3x3x3::TicTacToe3x3x3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TicTacToe3x3x3)
{
    //setup
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->gamewindow->setScene(scene);
    setWindowTitle("Tic Tac Toe 3x3x3");
    //loading resources
    move->setMedia(QUrl("qrc:/resources/Sounds/ttt_piece.wav"));
    move->setVolume(20);
    error->setMedia(QUrl("qrc:/resources/Sounds/sfx_sounds_error1.wav"));
    error->setVolume(20);
    action->setMedia(QUrl("qrc:/resources/Sounds/button_sound.wav"));
    action->setVolume(75);
    victory->setMedia(QUrl("qrc:/resources/Sounds/win_sound.wav"));
    victory->setVolume(75);
    imageo.load(":/resources/img/o_piece.png");
    imagex.load(":/resources/img/x_piece.png");
    imageo_sml.load(":/resources/img/o_piecesmall.png");
    imagex_sml.load(":/resources/img/x_piecesmall.png");
    setWindowIcon(QIcon(":/resources/img/icon.png"));
    scene->addPixmap(QPixmap(":/resources/img/3D_board.png"));
    scene->installEventFilter(this);
    scene->clear();
    //startgame
    startgame();

}

TicTacToe3x3x3::~TicTacToe3x3x3()
{
    delete ui;
}

void TicTacToe3x3x3::on_newgame_clicked()
{
    action->play();
    startgame();

}

void TicTacToe3x3x3::pos0Clicked(int pos){
    if (winner == true) return;
    if (game_started == false) return;
    // get position
    int boardpos = pos_arrayb[pos];
    int row = pos_arrayr[pos%9];
    int column = pos_arrayc[pos%9];
    if (player == 0){                                // actions for player 1
       if(!makemove(boardpos,row,column,player,board)){ // check for legal move
           error->play();
           return;
       }
       displaymove(imageo,imageo_sml, pos);         // show move on board
       if (move->state() == QMediaPlayer::PlayingState){   // play sound
           move->setPosition(0);
       }
       else if(move->state() == QMediaPlayer::StoppedState){
           move->play();
       }
       //display_board(board);                      // show board in console for testing
       if(check_winner(board,player)){              // check for winner
           winner = true;
           ui->label->setText("Player 1 won");
           oscore_count++;
           ui->oscore_label->setText(QString::number(oscore_count));
           victory->play();
           return;
       }
       player = 1;                                  // set up next players turn
       ui->label->setText("Player 2's turn");
       ui->cur_xolabel->setPixmap(imagex);

    }
    else if (player == 1){                          // actions for player 2
        if(!makemove(boardpos,row,column,player,board)){ // check for legal move
            error->play();
            return;
        }
        displaymove(imagex,imagex_sml, pos);            // show move on board
        if (move->state() == QMediaPlayer::PlayingState){  // play sound on move
            move->setPosition(0);
        }
        else if(move->state() == QMediaPlayer::StoppedState){
            move->play();
        }
        //display_board(board);                         // show board in console for testing
        if(check_winner(board,player)){                 // check for winner
            winner = true;
            ui->label->setText("Player 2 won");
            xscore_count++;
            ui->xscore_label->setText(QString::number(xscore_count));
            victory->play();
            return;
        }
        ui->label->setText("Player 1's turn");          // setup for next players turn
        ui->cur_xolabel->setPixmap(imageo);
        player = 0;
    }
}
void TicTacToe3x3x3::initialize_board(int board[3][3][3]){     // setup board for back end
  for(int i =0; i<3 ; i++){
    for(int j = 0; j < 3; j++){
      for(int k = 0; k < 3; k++){
        board[i][j][k] = -1;
      }
    }
  }
}
bool TicTacToe3x3x3::check_winner(int board[3][3][3], int player){       // checks for winner
  for(int z =0 ; z<3 ;z ++){
    for(int i =0 ;i<3 ; i++){
      if(board[z][i][0] == player && board[z][i][1]== player && board[z][i][2] == player){
        return true;
      }
      if(board[z][0][i] == player && board[z][1][i] == player && board[z][2][i] == player){
        return true;
      }
      if(board[i][0][z] == player && board[i][1][z] == player && board[i][2][z] == player){
        return true;
      }
      if(board[0][i][z] == player && board[1][i][z] == player && board[2][i][z] == player){
        return true;
      }
      if(board[0][z][i] == player && board[1][z][i] == player && board[2][z][i] == player){
        return true;
      }
      if(board[i][z][0] == player && board[i][z][1] == player && board[i][z][2] == player){
        return true;
      }
    }
    if(board[z][0][0] == player && board[z][1][1] == player && board[z][2][2] == player){
      return true;
    }
    if(board[z][0][2] == player && board[z][1][1] == player && board[z][2][0] == player){
      return true;
    }
    if(board[0][0][z] == player && board[1][1][z] == player && board[2][2][z] == player){
      return true;
    }
    if(board[0][2][z] == player && board[1][1][z] == player && board[2][0][z] == player){
      return true;
    }
    if(board[0][z][0] == player && board[1][z][1] == player && board[2][z][2] == player){
      return true;
    }
    if(board[0][z][2] == player && board[1][z][1] == player && board[2][z][0] == player){
      return true;
    }
  }
  if(board[0][0][0] == player && board[1][1][1] == player && board[2][2][2] == player){
    return true;
  }

  if(board[0][0][2] == player && board[1][1][1] == player && board[2][2][0] == player){
    return true;
  }


  return false;
}
void TicTacToe3x3x3::startgame(){                                        // setup for new game
    turn = 0;
    winner = false;
    initialize_board(board);
    //display_board(board);
    if (first_launch == true){
        int j = 1;
        for (int i = 0; i < 27; i++){
            QPushButton *Button_setup1 = new QPushButton(this);
            QSignalMapper* signalMapper = new QSignalMapper (this) ;
            connect(Button_setup1, SIGNAL(clicked()), signalMapper, SLOT(map()));
            signalMapper -> setMapping(Button_setup1, i);
            Button_setup1->setGeometry(boardleft_labelx[i%3],boardleft_labely[i/3],75,75);
            Button_setup1->setText("");
            Button_setup1->setStyleSheet("background-color: rgba(255,255,255,0%)");
            board_left[i] = Button_setup1;

            if (i == 8 || i == 17) j++;
            connect (signalMapper, SIGNAL(mapped(int)), this, SLOT(pos0Clicked(int)));
            first_launch = false;
            scene->addPixmap(QPixmap(":/resources/img/3D_board.png"));
            scene->clear();
            scene->addPixmap(QPixmap(":/resources/img/3D_board.png"));
            ui->oscore->setPixmap(imageo);
            ui->xscore->setPixmap(imagex);
        }
    }
    else {
        for (int i =0; i<27; i++){
            board_left[i]->setIcon(QIcon());
            //board_left[i]->setText(QString::number(i+1));
            ui->label->setText("Player " + QString::number(player+1) + "'s turn");
            if (player == 0) ui->cur_xolabel->setPixmap(imageo);
            else ui->cur_xolabel->setPixmap(imagex);
            game_started = true;
            scene->clear();
            scene->addPixmap(QPixmap(":/resources/img/3D_board.png"));
            }
    }
}

void TicTacToe3x3x3::display_board(int board[3][3][3]){                   // shows board in console for debugging
  for(int i= 0; i <3; i++){
    for(int j = 0; j <3 ; j++){
      for(int k =0; k <3 ; k++){
        if(board[i][j][k] == -1){
          cout<<"- ";
        }
        else if(board[i][j][k] == 0){
          cout<<"o ";
        }
        else{
          cout<<"x ";
        }

      }
      cout<<endl;
    }
    cout<<endl<<endl;
  }
}

bool TicTacToe3x3x3::makemove(int b, int r, int c, int p,int board[3][3][3]){  // makes the move in memory
    if(board[b][r][c] != -1){
        ui->label->setText("illegal move");
        return false;
    }
    else{
        board[b][r][c] = p;
        return true;
    }
}

void TicTacToe3x3x3::displaymove(QPixmap pix_map, QPixmap pix_mapsml, int pos){      // show the move made on gui
    board_left[pos]->setText("");
    board_left[pos]->setIcon(QIcon(pix_map));
    board_left[pos]->setIconSize(pix_map.rect().size());
    QGraphicsPixmapItem *item = new QGraphicsPixmapItem();
    item->setPixmap(pix_mapsml);
    scene->addItem(item);
    item->setPos(scene_posx[pos],scene_posy[pos]);
}

void TicTacToe3x3x3::on_reset_btn_clicked(){                                     // reset score count
    action->play();
    oscore_count = 0;
    xscore_count = 0;
    ui->xscore_label->setText(QString::number(xscore_count));
    ui->oscore_label->setText(QString::number(xscore_count));
    return;
}

void TicTacToe3x3x3::on_htp_clicked()                                   // creates a new window showing how to play instructions
{
    action->play();
    howtoplay *htpwindow = new howtoplay(this);
    htpwindow->show();
}
