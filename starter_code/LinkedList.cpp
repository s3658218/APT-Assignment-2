
#include "LinkedList.h"
#include "Tile.h"
#include "TileCodes.h"
#include<iostream>

LinkedList::LinkedList() {

}

LinkedList::~LinkedList() {
}
void printList(Node *n){
    while (n != nullptr){
        std::cout << n-> tile << "" << std::endl;
        n = n -> next;
 }
}
void printTileBag(Tile tileBag[71]){
   for (int i = 0; i < 72; i++){
        std::cout << tileBag[i].colour << tileBag[i].shape << std::endl;
        if ((i + 1)% 12 == 0){
            std::cout << std::endl;
        }
    }
}
void fillBag(Tile tiles[71], Node *n){
   for (int i = 0; i < 71; i++){
      n -> tile = &tiles[i];
      n = n -> next;
   }
}



//All made in a main for testing purposes
int main(){
   Node* headBag;
   Node* bag;
   Node* temp;
   temp = nullptr;
   headBag = new Node();
   //Checking if I can pass the tiles from tile.cpp
   Tile bagOfTiles[71];
   TileFunction* create_obj = new TileFunction;
   create_obj -> createTiles(bagOfTiles);
   Tile* bagOfTilesptr[71];
   for (int i = 0; i < 71; i++){
      bagOfTilesptr[i] = &bagOfTiles[i];
   }
   //Creating a bag linked list
   printTileBag(*bagOfTilesptr);
   for (int i = 0; i < 71; i++){
      //Setting the head node
      if (i == 0){
      bag = new Node();
      bag -> tile = bagOfTilesptr[i];
      bag -> next = bag;
      headBag = bag;
      temp = bag;
      } else {
         //https://www.youtube.com/watch?v=o5wJkJJpKtM helps understand this bit
         bag = new Node(); //create a new node
         bag -> tile = bagOfTilesptr[i]; //insert the pointer value of the tile
         temp -> next = bag; //links the first node to this new tile
         temp = temp -> next; //next pointer is now pointing to the new node next
      }
    }
   //fillBag(bagOfTiles, headBag);
   printList(headBag);
}