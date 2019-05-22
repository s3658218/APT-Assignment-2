#ifndef GAMEMENU_H
#define GAMEMENU_H
#include "Node.h"
class GameMenu {
public:

  Node* z;
  void mainMenu();
  void newGame();
  void continueGameplay();
  void loadGame();
  void studentInfo();
  void exitProgram();
  void helpFunction1();
  void helpFunction2();

  void placeTileOntoBoard();
  void replaceTileInHand();
  void saveCurrentGame();
  void exitTheProgram();
  void endTurn();

  void printList(Node *n);
  void printArray(Node* n);


};

#endif
