  #include <iostream>
  #include <string>
  #include "GameMenu.h"

  //input & output stream required when writing to a file
  #include <fstream>

  using std::string;
  using std::cout;
  using std::endl;
  using std::cin;
  //output stream required when writing to a file
  //input stream required when writing to a file
  using std::ofstream;
  using std::ifstream;

int playerInput;
std::string player1;
std::string player2;
bool endLoop;

//save file needs to be global
std::string saveGame;

void baseGameplay();

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
  cout << "Starting a New Game\n" << endl;
  cout << "Enter a name for player 1 (uppercase characters only)" << endl;
  cin >> player1;
  cout << "Enter a name for Player 2 (uppercase characters only)" << endl;
  cin >> player2;
  cout << endl;
  cout << "Player 1 is: " << player1 << endl;
  cout << "Player 2 is: " << player2 << endl;
  cout << "Let's Play!";

  //call function
  std::cout << endl;
  baseGameplay();
}

void loadGame() 
{
  cout << "Enter the filename from which load a game" << endl;

  std::string pathInput;
  cin >> pathInput;

  std::istream& inputStream = std::cin;
  double value;
  inputStream >> value;
  std::cout << "Read: " << value << std::endl;

  //validation check, see if the save file exists
  // if (!(pathInput == saveGame))
  // {
  //   std::cout << "Error: File does not exist. ";
  // }
  // else
  // {
  //   /* code */
  //   std::cout << "Success! ";
  // }
  
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


void baseGameplay()
{
  //string that the user enters
  std::string playerInput;

  std::cout << player1 << ", it's your turn " << std::endl;
  std::cout << endl;
  std::cout << "Score for " << player1 << ": " << "PLAYER 1 SCORE VAR" << endl;
  std::cout << "Score for " << player2 << ": " << "PLAYER 2 SCORE VAR" << endl;
  std::cout << endl;
  std::cout << "   0  1  2  3  4  5" << endl;
  std::cout << " --------------------" << endl;
  std::cout << "A |  |  |  |  |  |  |" << endl;
  std::cout << "B |  |  |  |  |  |  |" << endl;
  std::cout << "C |  |  |  |  |  |  |" << endl;
  std::cout << "D |  |  |  |  |  |  |" << endl;
  std::cout << "E |  |  |  |  |  |  |" << endl;
  std::cout << "F |  |  |  |  |  |  |" << endl;
  std::cout << endl;
  std::cout << "Your hand is: " << endl;
  std::cout << "PLAYER 1 TILES " << endl;
  std::cout << endl;

  //input from user
  std::cout << "> ";
  std::cin >> playerInput;

  if(playerInput == "save")
  {
    //var for save file
    //std::string saveGame;

    std::cout << "Enter name for the save file. e.g. (fileName.txt) ";
    std::cin >> saveGame;

    std::string saveFile(saveGame);
    std::ofstream outFile;
    outFile.open(saveFile);
    //what gets printed inside the file
    outFile << player1 << std::endl;
    outFile << "player1 SCORE " << std::endl;
    outFile << "player1 HAND " << std::endl;
    outFile << player2 << std::endl;
    outFile << "player2 SCORE " << std::endl;
    outFile << "player2 SCORE " << std::endl;
    outFile << "WHOLE MAP/BOARD " << std::endl;
    outFile << "TILE BAG CONTENTS " << std::endl;
    outFile << "CURRENT PLAYER NAME " << std::endl;
    outFile.close();

    std::cout << "Game saved successfully ";
  }
  else
  {
    std::cout << "NOPE ";
  }
  

}


