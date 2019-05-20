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

Player p;
Board b;

void mainMenu()
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
      newGame();
    }
    else if(stringInput1 == "2")
    {
      loadGame();
    }
    else if(stringInput1 == "3")
    {
      studentInfo();
    }
    else if (stringInput1 == "4")
    {
      exitProgram();
    }
    else if(stringInput1 == "^D") {
      exitProgram();
    } else {
      cout << endl;
      cout << "Invalid Input" << endl;
    }
  }
  while(endLoop == false);

}

void newGame() { // need to do: validation check for numbers or symbols
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

  continueGameplay();
}

void continueGameplay() {
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
      placeTileOntoBoard();
    }
    else if(stringInput2 == "2")
    {
      replaceTileInHand();
    }
    else if(stringInput2 == "3")
    {
      saveCurrentGame();
    }
    else if (stringInput2 == "4")
    {
      exitTheProgram();
    } else if (stringInput2 == "^D") {
      exitTheProgram();
    } else {
      cout << endl;
      cout << "Invalid Input" << endl;
      cout << endl;
    }

  } while(endGameplay == false);

}

void loadGame() {
  cout << "Enter the filename from which load a game" << endl;
}

void studentInfo() {
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

void exitProgram() {
  cout << "Goodbye" << endl;
  endLoop = true;
}

void placeTileOntoBoard() {
  b.testBoard();
  p.switchPlayer();
  p.updateScore();
}

void replaceTileInHand() {
  cout << "REPLACING TILE IN HAND" << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

void saveCurrentGame() {
  cout << "SAVING THE CURRENT GAME" << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

void exitTheProgram() {
  cout << "Goodbye" << endl;
  endGameplay = true;
}

//:)
