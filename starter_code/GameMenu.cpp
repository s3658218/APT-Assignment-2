  #include <iostream>
  #include "GameMenu.h"
  #include "Board.h"
  #include "Player.h"
  #include "Tile.h"
  #include "Randomiser.h"
  #include "LinkedList.h"
  #include "Node.h"

  using std::string;
  using std::cout;
  using std::endl;
  using std::cin;

string stringInput1;
string stringInput2;
bool endLoop;
bool endGameplay;
bool currentGame;
bool playerTurn;
Node* z;
bool nodeCheck;

Player p;

Board b;
Tile t;
Randomiser r;
LinkedList l;

void GameMenu::mainMenu()
{
  do
  {

    cout << endl;
    cout << "Welcome to Qwirkle!" << endl;
    cout << "-------------------" << endl;
    cout << endl;
    cout << "Menu" << endl;
    cout << "----" << endl;

    cout << "1. New Game " << endl;
    cout << "2. Load Game " << endl;
    cout << "3. Show student information " << endl;
    cout << "4. Quit " << endl;
    cout << endl;
    cout << ">" << endl;
    cout << endl;

    //read playerInput
    cout << "Enter Input: ";
    cin >> stringInput1;

    if(stringInput1 == "1")
    {
      Tile bagOfTiles[72];
      Tile* bagOfTilesptr[72];
      t.createTiles(bagOfTiles);
      r.shuffleBag(bagOfTiles);
      for (int i = 0; i < 72; i++){
        bagOfTilesptr[i] = &bagOfTiles[i];
      }

      for (int i = 0; i < 72; i++){
        Tile* temp = bagOfTilesptr[i];
        l.createBag(temp);
      }

      for (int i = 0; i < 6; i++){
        l.p1Head = l.deal(l.p1Head);
        l.p2Head = l.deal(l.p2Head);
      }

      GameMenu::newGame();
    }
    else if(stringInput1 == "2")
    {
      GameMenu::loadGame();
    }
    else if(stringInput1 == "3")
    {
      //printArray(l.p1Head);
      //printArray(l.p2Head);
      GameMenu::studentInfo();
    }
    else if (stringInput1 == "4")
    {
      GameMenu::exitProgram();
    }
    else if(stringInput1 == "^D") {
      GameMenu::exitProgram();
    }
    else if(stringInput1 == "help") {
      GameMenu::helpFunction1();
    } else {
      cout << endl;
      cout << "Invalid Input! You are not allowed to enter " << "''" << stringInput1 << "'', please try one of the inputs listed above" << endl;
    }
  }
  while(endLoop == false);

}

void GameMenu::newGame() { // need to do: validation check for numbers or symbols
  cout << "> 1" << endl;
  cout << endl;
  cout << "Starting a New Game" << endl;
  cout << endl;
  cout << "Enter a name for player 1 (uppercase characters only)" << endl;
  cin >> p.player1;
  cout << endl;
  cout << "Enter a name for Player 2 (uppercase characters only)" << endl;
  cin >> p.player2;
  cout << endl;
  p.currentPlayer = p.player1;
  cout << "Let's Play!" << endl;
  cout << endl;

  GameMenu::continueGameplay();
}

void GameMenu::continueGameplay() {
  do {
    cout << endl;
    cout << p.currentPlayer << ", it's your turn" << endl;
    cout << "Score for " << p.player1 << ": " << p.player1Score << endl;
    cout << "Score for " << p.player2 << ": " << p.player2Score << endl;
    cout << "BOARD" << endl;
    b.displayBoard();
    cout << endl;
    cout << "Your hand is: ";
    if (p.currentPlayer == p.player1) {
      z = l.p1Head;
    } else {
      z = l.p2Head;
    }
    printArray(z);
    cout << endl;
    cout << "Options" << endl;
    cout << "1: Place a tile onto the board" << endl;
    cout << "2: Replace a tile in your hand" << endl;
    cout << "3: Save the game to a file" << endl;
    cout << "4: Quit the game" << endl;
    cout << "5: End Turn" << endl;
    cout << "Enter Input: " << endl;
    cin >> stringInput2;

    if(stringInput2 == "1")
    {
      GameMenu::placeTileOntoBoard();
    }
    else if(stringInput2 == "2")
    {
      GameMenu::replaceTileInHand();
    }
    else if(stringInput2 == "3")
    {
      GameMenu::saveCurrentGame();
    }
    else if (stringInput2 == "4")
    {
      GameMenu::exitTheProgram();
    }
     else if (stringInput2 == "^D")
     {
      GameMenu::exitTheProgram();
    }
    else if(stringInput2 == "5")
    {
      GameMenu::endTurn();
    }
    else if(stringInput2 == "help")
    {
      GameMenu::helpFunction2();
    } else {
      cout << endl;
      cout << "Invalid Input! You are not allowed to enter " << "''" << stringInput2 << "'', please try one of the inputs listed above" << endl;
      cout << endl;
    }

  } while(endGameplay == false);

}

void GameMenu::loadGame() {
  cout << "Enter the filename from which load a game" << endl;
}

void GameMenu::studentInfo() {
    cout << endl;
    cout << "Name: George Korovinis" << endl;
    cout << "Student ID: s3658218" << endl;
    cout << "Email: s3658218@student.rmit.edu.au\n" << endl;

    cout << "Name: Tylar Lariba-Taing" << endl;
    cout << "Student ID: s3604139" << endl;
    cout << "Email: s3604139@student.rmit.edu.au\n" << endl;

    cout << "Name: Lorenzo Vossos" << endl;
    cout << "Student ID: s3792797" << endl;
    cout << "Email: s3792797@student.rmit.edu.au\n" << endl;
    cout << endl;

}

void GameMenu::exitProgram() {
  cout << "Goodbye" << endl;
  endLoop = true;
}

void GameMenu::helpFunction1() {
  cout << endl;
  cout << "------------" << endl;
  cout << "Help Display" << endl;
  cout << "You may execute the following commands: 1, 2, 3, 4, ^D and help" << endl;
  cout << endl;
}

void GameMenu::placeTileOntoBoard() {
  b.testBoard();
  p.updateScore();
}


void GameMenu::replaceTileInHand() {
  cout << "IMPLEMENT, REPLACE TILE" << endl;
}

void GameMenu::saveCurrentGame() {
  cout << "SAVING THE CURRENT GAME" << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

void GameMenu::exitTheProgram() {
  cout << "Goodbye" << endl;
  endGameplay = true;
  exit(0);
}

void GameMenu::endTurn() {
  p.switchPlayer();
  cout << "Current Players turn ending!" << endl;
  cout << endl;
}

void GameMenu::helpFunction2() {
  cout << endl;
  cout << "------------" << endl;
  cout << "Help Display" << endl;
  cout << "You may execute the following commands: 1, 2, 3, 4, 5, ^D and help" << endl;
  cout << endl;
}

void GameMenu::printList(Node *n){
   int test=0;
    while (n != nullptr){
        std::cout << n -> tile << "" << std::endl;
        n = n -> next;
        test++;
 }
 std::cout << test << std::endl;
}

void GameMenu::printArray(Node* n){
   //creating an array just for this hand
   Tile hand[6];
   //creating a pointer array to store the node value
   Tile* handptr[6];
   for (int i = 0; i < 6; i++){
   //storing node value into pointer array
   handptr[i] = n -> tile;
   //storing dereferencing the pointer and storing it into a temp hand
   hand[i] = *handptr[i];
   std::cout << hand[i].colour << hand[i].shape << " ";
   //going to the next node
   n = n -> next;
   }
   std::cout << std::endl;
}
