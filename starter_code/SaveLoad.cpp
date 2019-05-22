//#include "pch.h"

#include <iostream>
#include "SaveLoad.h"
#include "Player.h"
#include "GameMenu.h"
#include "Board.h"
#include <string>
//input & output stream required when writing to a file
#include <fstream>

//links variables & functions
Player u;
Board d;

using std::string;
using std::cout;
using std::endl;
using std::cin;
//output stream required when writing to a file
//input stream required when writing to a file
using std::ofstream;
using std::ifstream;

//save file needs to be global
std::string saveGame;
int playerInput;

//call function
//void baseGameplay();

void SaveLoad::loadGame()
{
  //call variables from other file
  //u.player1;
  //u.player2;

  cout << "Enter the filename from which load a game e.g.(fileName.txt)" << endl;

  string pathInput;
  cin >> pathInput;

  std::ifstream inFile;
  inFile.open(pathInput);

  //validation check
  if (!inFile)
  {
    cout << "Unable to open file: " << pathInput << endl;
  }
  else
  {
    cout << "Success!" << endl;

    string line;

    while (std::getline(inFile, line)) // read each line of the file
    {
        // copy the line to the screen yourself
        cout << line << endl;
    }
    //close the file
    inFile.close();
  }

}

void SaveLoad::baseGameplay()
{
  //string that the user enters
  std::string playerInput;

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
    outFile << u.player1 << std::endl;
    outFile << u.player1Score << std::endl;
    outFile << "player1 HAND " << std::endl;
    outFile << u.player2 << std::endl;
    outFile << u.player2Score << std::endl;
    outFile << "player2 HAND " << std::endl;
    //outFile << d.displayBoard << std::endl;
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
