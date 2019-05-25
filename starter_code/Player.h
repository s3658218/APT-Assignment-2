#ifndef ASSIGN2_PLAYER_H
#define ASSIGN2_PLAYER_H
#include <string>

using std::string;

class Player {
public:

  int player1Score = 0;
  int player2Score = 0;
  string player1;
  string player2;
  string currentPlayer;

  void switchPlayer();
  void updateScore();
};


#endif
//:)
