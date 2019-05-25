#ifndef ASSIGN2_GAMEMENU_H
#define ASSIGN2_GAMEMENU_H
#include "Node.h"
// #include "Board.h"
#include "Player.h"
#include "Tile.h"
#include "Randomiser.h"
#include "LinkedList.h"
#include "Node.h"

class GameMenu {
public:
  bool tileCheck = false;
  int index = 0;
  int handSize = 6;
  void mainMenu();
  void newGame();
  void continueGameplay();
  void loadGame();
  void studentInfo();
  void exitProgram();
  void helpFunction1();
  void helpFunction2();
  void checkForEndTurn();
  void testBoard();

  void placeTileOntoBoard();
  void replaceTileInHand();
  void saveCurrentGame();
  void exitTheProgram();
  //void endTurn();

  void printList(Node *n);
  void printArray(Node* n);
};

#endif
