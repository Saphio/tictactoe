#include <iostream>

using namespace std;

// function prototypes
bool isLegalMove (char[] move, int & r, int & c, int[][] board);
void updateBoard (int[][] & board);
void displayBoard (int[][] board);
int checkWin (int[][] board);

// main loop
int main () {

  cout << "Welcome to tic-tac-toe!" << endl;

  int winsX = 0, winsO = 0, ties = 0;
  bool isPlaying = true;

  // player 1 = X = 0
  // player 2 = O = 1
 // no token there = -1

  while (isPlaying) {
    // initialize and fill board
    int[3][3] board;
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        board[i][j] = -1;
      }
    }
  int curPlayer = 0;

    // enter a move
    cout << "Enter a move, e.g. a1." << endl;
    char[2] move;
    cin.get(move, 2, '\n');
    cin.get();
    // parse move and check if move is legal
    int r, c = 0, 0;
while (!isLegalMove(move, r, c, board)) {
      cout << "Enter a legal move, e.g. a1." << endl;
      cin.get(move, 2, '\n');
      cin.get();
    }


    // update board

    // display board

    // check for win
 return 0;
}

// other functions
bool isLegalMove (char[] move, int & r, int & c, int[][] board) {
  char letter = move[0];
  char number = move[1];

  // check letter
  if (letter != 'a' && letter != 'b' && letter != 'c') {
    return false;
  }
  else {
    if (letter == 'a') { r = 0; }
 else { r = 2; }
  }

  // check number
  if (number != '1' && number != '2' && number != '3') {
    return false;
  }
  else {
    if (number == '1') { c = 0; }
    else if (number == '2') { c = 1; }
    else { c = 2; }
  }

  // otherwise return true
  return true;
}
