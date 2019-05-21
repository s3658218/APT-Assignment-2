  #include <iostream>
  #include "GameMenu.h"
  #include "Board.h"
  #include "Player.h"

  using std::string;
  using std::cout;
  using std::endl;
  using std::cin;

string stringInput1;
string stringInput2;
bool endLoop;
bool endGameplay;
bool currentGame;
<<<<<<< HEAD
=======

Player p;
Board b;
>>>>>>> d894682e56b5b9b9733fc278b985354789bf322d

Player p;
Board b;

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
      GameMenu::newGame();
    }
    else if(stringInput1 == "2")
    {
      GameMenu::loadGame();
    }
    else if(stringInput1 == "3")
    {
      GameMenu::studentInfo();
    }
    else if (stringInput1 == "4")
    {
      GameMenu::exitProgram();
    }
    else if(stringInput1 == "^D") {
      GameMenu::exitProgram();
    } else {
      cout << endl;
      cout << "Invalid Input" << endl;
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
    cout << "Your hand is" << endl;
    cout << "IMPLEMENT HAND LINKEDLIST" << endl;
    cout << "-----------------------" << endl;
    cout << endl;
    cout << "Options" << endl;
    cout << "1: Place a tile onto the board" << endl;
    cout << "2: Replace a tile in your hand" << endl;
    cout << "3: Save the game to a file" << endl;
    cout << "4: Quit the game" << endl;
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
    } else if (stringInput2 == "^D") {
      GameMenu::exitTheProgram();
    } else {
      cout << endl;
      cout << "Invalid Input" << endl;
      cout << endl;
    }

  } while(endGameplay == false);

}

void GameMenu::loadGame() {
  cout << "Enter the filename from which load a game" << endl;
}

void GameMenu::studentInfo() {
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

<<<<<<< HEAD
void GameMenu::placeTileOntoBoard() {
=======
void placeTileOntoBoard() {
>>>>>>> d894682e56b5b9b9733fc278b985354789bf322d
  b.testBoard();
  p.switchPlayer();
  p.updateScore();
}

void GameMenu::replaceTileInHand() {
  cout << "REPLACING TILE IN HAND" << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

void GameMenu::saveCurrentGame() {
  cout << "SAVING THE CURRENT GAME" << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

void GameMenu::exitTheProgram() {
  cout << "Goodbye" << endl;
  endGameplay = true;
}

//:)
