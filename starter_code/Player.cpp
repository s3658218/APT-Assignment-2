#include <iostream>
#include "Player.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;


void Player::switchPlayer() {
  if (currentPlayer == player1) {
    currentPlayer = player2;
  } else {
    currentPlayer = player1;
  }
}

void Player::updateScore() {
  if (currentPlayer == player1) {
    player1Score = player1Score + 1;
  } else {
    player2Score = player2Score + 1;
  }
}
//:)
