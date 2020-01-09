#include <iostream>

int main() {
  enum pieces{
    Rook = 1,
    Knight,
    Bishop,
    Queen,
    King,
    Pawn
  };

  int chessboard[8][8] = {};

  //add pawns
  for (int i = 0; i < 8; i++){
    board[1][i] = Pawn;
    board[6][i] = Pawn;
  }

  //add other elems
  board[0][0] = Rook;
  board[0][1] = Knight;
  board[0][2] = Bishop;
  board[0][3] = King;
  board[0][4] = Queen;
  board[0][5] = Bishop;
  board[0][6] = Knight;
  board[0][7] = Rook;

  board[7][0] = Rook;
  board[7][1] = Knight;
  board[7][2] = Bishop;
  board[7][3] = Queen;
  board[7][4] = King;
  board[7][5] = Bishop;
  board[7][6] = Knight;
  board[7][7] = Rook;

  }

  return 0;
}
