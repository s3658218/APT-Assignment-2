#include "Tile.h"
#include "TileCodes.h"

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int sizeOfMaze = 24;
int tileType;
int tileLocationX;
int tileLocationY;

int testArray[6][6] = { {0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0} };

void displayBoard() {
  for (unsigned int i = 0; i < 6; i++) {
    cout << endl;
      for (unsigned int j = 0; j < 6; j++) {
          cout << "|" <<testArray[i][j] << "|";
      }
  }
  cout << endl;
}



void testBoard() {
  cout << "Which tile would you like to place?" << endl;
  cin >> tileType;
  cout << "Okay! and what is the X coordinate? (starts at 0, so 0-23)" << endl;
  cin >> tileLocationX;
  tileLocationX = tileLocationX;
  cout << "And what is the Y cooardinate? (starts at 0, so 0-23)" << endl;
  cin >> tileLocationY;
  tileLocationY = tileLocationY;
  cout << "Placing " << tileType << " at X: " << tileLocationX << " Y: " << tileLocationY << endl;

  testArray[tileLocationY][tileLocationX] = tileType;

  //cout << "AFTER RESULTS" << endl << endl;

  //for (unsigned int i = 0; i < 6; i++) {
    //cout << endl;
      //for (unsigned int j = 0; j < 6; j++) {
          //cout << "|" <<testArray[i][j] << "|";
      //}
  //}
  cout << endl;
}
//:)
