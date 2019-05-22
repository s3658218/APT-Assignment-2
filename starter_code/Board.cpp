#include "Tile.h"
#include "TileCodes.h"
#include "Board.h"
#include "Player.h"
#include "LinkedList.h"

#include "GameMenu.h"

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
char x;
int y;
bool nodeCheck = false;

Player p;
GameMenu g;
LinkedList l;
//Node* z;

int testArray[6][6] = {   {0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0}, };

string letters[6] = {"A", "B", "C", "D", "E", "F"};

void Board::displayBoard() {
  cout << "  0  1  2  3  4  5" << endl;
  for (unsigned int i = 0; i < 6; i++) {
    cout << letters[i] << " ";
    //cout << endl;
      for (unsigned int j = 0; j < 6; j++) {
          cout << "|" <<testArray[i][j] << "|";
      }
      cout << endl;
  }
  cout << endl;
}



void Board::testBoard() {


  //do {
    //cout << "Which colour would you like to place" << endl;
    //cin >> x;
    //cout << "Which shape would you like to place" << endl;
    //cin >> y;
    //Tile* inputTile = new Tile(x,y);
    //if (p.currentPlayer == p.player1) {
        //z = l.p1Head;
    //} else {
        //z = l.p2Head;
    //}
    //l.tileComparePlace(g.z, inputTile, nodeCheck);
  //} while(nodeCheck == false);


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
