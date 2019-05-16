  #include <iostream>
  #include "GameMenu.h"
  #include "Tile.h"

  using std::string;
  using std::cout;
  using std::endl;
  using std::cin;

int playerInput;
std::string player1;
std::string player2;
bool endLoop;

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
    cin >> playerInput;

    if(playerInput == 1)
    {
      newGame();
    }
    else if(playerInput == 2)
    {
      loadGame();
    }
    else if(playerInput == 3)
    {
      studentInfo();
    }
    else if (playerInput == 4)
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
  cout << "Starting a New Game" << endl;
  cout << endl;
  cout << "Enter a name for player 1 (uppercase characters only)" << endl;
  cin >> player1;
  cout << "Enter a name for Player 2 (uppercase characters only)" << endl;
  cin >> player2;
  cout << endl;
  cout << "Player 1 is: " << player1 << endl;
  cout << "Player 2 is: " << player2 << endl;
  cout << "Let's Play!";

  //Tile bagTiles[71];
  //Tile::createTiles(bagTiles);
  //Tile::printTileBag(bagTiles);
}

void loadGame() {
  cout << "Enter the filename from which load a game" << endl;
}

void studentInfo() {
    cout << "Name: George Korovinis" << endl;
    cout << "Student ID: s3658218" << endl;
    cout << "Email: s3658218@student.rmit.edu.au" << endl;
    cout << endl;
    cout << "Name: Tylar Lariba-Taing" << endl;
    cout << "Student ID: s3604139" << endl;
    cout << "Email: s3604139@student.rmit.edu.au" << endl;
    cout << endl;
    cout << "Name: Lorenzo Vossos" << endl;
    cout << "Student ID: s3792797" << endl;
    cout << "Email: s3792797@student.rmit.edu.au" << endl;
    cout << endl;

}

void exitProgram() {
  cout << "Goodbye" << endl;
  endLoop = true;
}
