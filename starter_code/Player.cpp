#include <iostream>
#include "Player.h"

using std::string;
using std::cout;
using std::endl;
using std::cin;


void Player::switchPlayer() {
  if (currentPlayer == player1) {
    currentPlayer = player2;
  } else {
    currentPlayer = player1;
  }
}

void Player::updateScore() {
  if (currentPlayer == player1) {
    player2Score = player2Score + 1;
  } else {
    player1Score = player1Score + 1;
  }
}
//:)
