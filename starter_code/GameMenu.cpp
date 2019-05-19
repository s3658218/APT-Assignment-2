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
int player1Score = 0;
int player2Score = 0;
string player1;
string player2;
string currentPlayer;

void mainMenu()
{
  do
  {

    cout << endl;
    cout << "Welcome to Qwirkle!" << std::endl;
    cout << "-------------------" << std::endl;
    cout << endl;
    cout << "Main Menu" << endl;
    cout << "---------" << endl;

    cout << "1. New Game " << endl;
    cout << "2. Load Game " << endl;
    cout << "3. Show student information " << endl;
    cout << "4. Exit " << endl;
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
    } else {
      cout << endl;
      cout << "~~~PLEASE ENTER A CORRECT VALUE!~~~" << endl;
    }
  }
  while(endLoop == false);

}

void newGame() { // need to do: validation check for numbers or symbols
  cout << "Starting a New Game\n" << endl;
  cout << "Enter a name for player 1 (uppercase characters only)" << endl;
  cin >> player1;
  cout << "Enter a name for Player 2 (uppercase characters only)" << endl;
  cin >> player2;
  cout << endl;
  cout << "Player 1 is: " << player1 << endl;
  cout << "Player 2 is: " << player2 << endl;
  currentPlayer = player1;
  cout << "Let's Play!" << endl;
  cout << endl;

  continueGameplay();
}

void continueGameplay() {
  do {
    cout << "Current Player: " << currentPlayer << endl;
    cout << player1 << "'s Score: " << player1Score << endl;
    cout << player2 << "'s Score: " << player2Score << endl;
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
    } else {
      cout << endl;
      cout << "~~~PLEASE ENTER A CORRECT VALUE!~~~" << endl;
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
  displayBoard();
  testBoard();
  switchName();
  updateScore();
}

void replaceTileInHand() {
  cout << "REPLACING TILE IN HAND" << endl;
  switchName();
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

void switchName() {
  if (currentPlayer == player1) {
    currentPlayer = player2;
  }
  else {
    currentPlayer = player1;
  }
}

void updateScore() { // needs fixing
  if (currentPlayer == player1) {
    player2Score = player2Score + 1;
  } else {
    player1Score = player1Score + 1;
  }
}
