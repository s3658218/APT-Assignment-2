#include "Tile.h"
#include "TileCodes.h"
#include "Board.h"
#include "LinkedList.h"
#include "GameMenu.h"

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
LinkedList ll;
GameMenu gm;

string tile2d;
char x;
int y;
int sizeOfMaze = 24;
int tileType;
int tileLocationX;
int tileLocationY;
bool tileCheck = false;

string testArray[6][6] = {  {"  ", "  ", "  ", "  ", "  ", "  "},
                            {"  ", "  ", "  ", "  ", "  ", "  "},
                            {"  ", "  ", "  ", "  ", "  ", "  "},
                            {"  ", "  ", "  ", "  ", "  ", "  "},
                            {"  ", "  ", "  ", "  ", "  ", "  "},
                            {"  ", "  ", "  ", "  ", "  ", "  "}, };


string letters[6] = {"A", "B", "C", "D", "E", "F"};

void Board::displayBoard() {
  cout << "   0   1   2   3   4   5" << endl;
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
  //while (tileCheck != true){
  cout << "Which colour would you like to place" << endl;
  cin >> x;
  cout << "Which shape would you like to place" << endl;
  cin >> y;
  //Tile* tmpTile = new Tile(x, y);
  //ll.tileComparePlace(gm.z, tmpTile, tileCheck);
  string placeholderXD;
  string placeholder1 = string(1, x);
  string placeholder2;
  placeholder2 = std::to_string(y);
  //cout << placeholder1 << endl;
  //cout << placeholder2 << endl;
  tile2d =  placeholder1 + placeholder2;
//}

  cout << "Okay! and what is the X coordinate? (starts at 0, so 0-23)" << endl;
  cin >> tileLocationX;
  tileLocationX = tileLocationX;
  cout << "And what is the Y cooardinate? (starts at 0, so 0-23)" << endl;
  cin >> tileLocationY;
  tileLocationY = tileLocationY;
  cout << "Placing " << tileType << " at X: " << tileLocationX << " Y: " << tileLocationY << endl;

  testArray[tileLocationY][tileLocationX] = tile2d;

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
