#include<iostream>
using namespace std;

//displays the board
void display_board(int board[3][3][3]){
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


//initializing the board to -1
void initialize_board(int board[3][3][3]){
  for(int i =0; i<3 ; i++){
    for(int j = 0; j < 3; j++){
      for(int k = 0; k < 3; k++){
        board[i][j][k] = -1;
      }
    }
  }
}


//checking if there is a winner 
bool check_winner(int board[3][3][3], int player){
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

bool input(int board[3][3][3], int player){
  int i, j, k;
  bool i_check = false, j_check = false, k_check = false;
  bool move = false;
  while (!move){
    if(player == 0){
      cout<<"Player 1 (o) turn: "<<endl;
    }
    else{
      cout<<"Player 2 (x) turn: "<<endl;;
    }
    while(!i_check){
      cout<<"Enter which single tic tac toe you want to select(0-2) : ";
      if(cin>>i){
        if( i>-1 && i <3){
          i_check = true;
        }
        else{
          cout<<"Out of index"<<endl;
        }
      }
    }

    while(!j_check){
      cout<<"Enter which row in "<<i<<"th tic tac toe you want to select(0-2) : ";
      if(cin>>j){
        if( j>-1 && j <3){
          j_check = true;
        }
        else{
          cout<<"Out of index"<<endl;
        }
      }
    }

    while(!k_check){
      cout<<"Enter which column in "<<j<<" row of "<<i<<"tic tac toe you want to select(0-2) : ";
      if(cin>>k){
        if( k>-1 && k <3){
          k_check = true;
        }
        else{
          cout<<"Out of index"<<endl;
        }
      }

    }


    if(board[i][j][k] != -1){
      cout<<"Wrong move"<<endl;
    }
    else{
      board[i][j][k] = player;
      move = true;
      return true;
    }
  }
  return false;

}



int main(){
  int turn = 0;
  int player = false;
  bool winner = false;
  bool tie = false;
  int board[3][3][3];
  initialize_board(board);
  display_board(board);
  while (!winner && !tie){
    if (turn == 9){
      cout<<"Tie"<<endl;
      tie = true;
    }
    else if(!player){
      if (input(board, 0)){
        display_board(board);
        turn++;
        winner = check_winner(board,0);
        if(winner){
          cout<<"Player 1 (o) has won the game"<<endl;
        }
        player = !player;
      }
    }
    else{
      if (input(board, 1)){
        display_board(board);
        turn++;
        winner = check_winner(board,1);
        if(winner){
          cout<<"Player 2(x) has won the game"<<endl;
        }
        player = !player;
      }
    }
  }


  return 0;
}
