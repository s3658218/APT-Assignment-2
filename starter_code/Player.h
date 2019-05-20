#ifndef PLAYER_H
#define PLAYER_H

using std::string;

class Player {
public:

  int player1Score = 0;
  int player2Score = 0;
  string player1;
  string player2;
  string currentPlayer;

  void switchPlayer();
};


#endif
//:)
