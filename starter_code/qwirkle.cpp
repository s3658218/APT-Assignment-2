
#include "LinkedList.h"
#include "Randomiser.h"

#include <iostream>
Tile t;
Randomiser r;
LinkedList l;
//all code here is for testing

void printList(Node *n){
   int test=0;
    while (n != nullptr){
        std::cout << n -> tile << "" << std::endl;
        n = n -> next;
        test++;
 }
 std::cout << test << std::endl;
}

void printArray(Node* n){
   //creating an array just for this hand
   Tile hand[5];
   //creating a pointer array to store the node value
   Tile* handptr[5];
   for (int i = 0; i < 5; i++){
   //storing node value into pointer array
   handptr[i] = n -> tile;
   //storing dereferencing the pointer and storing it into a temp hand
   hand[i] = *handptr[i];
   std::cout << hand[i].colour << hand[i].shape <<std::endl;
   //going to the next node
   n = n -> next;
   }
}
void tileComparePlace(Node* n, Tile* tile){
   int index = 0;
   int counter = 0;
   Node* temp = n;
   while (counter <= 5){
   Tile tempTile = *tile;
   Tile* nodeTileptr = temp -> tile;
   Tile nodeTile = *nodeTileptr;
      if (tempTile.colour == nodeTile.colour && tempTile.shape == nodeTile.shape){
         std::cout << "Placed tile" <<  std::endl;
         l.placeTile(n, index);
         counter = 7;
      } else {
         if(temp -> next != nullptr){
         temp = temp -> next;
         }
         counter++;
         index++;
      }
   }
  if (counter == 6){ std::cout << "Enter a valid tile" << std::endl;
   delete tile;
  }
}
void tileCompareReplace(Node* n, Tile* tile){
   int index = 0;
   int counter = 0;
   Node* temp = n;
   while (counter <= 5){
   Tile tempTile = *tile;
   Tile* nodeTileptr = temp -> tile;
   Tile nodeTile = *nodeTileptr;
      if (tempTile.colour == nodeTile.colour && tempTile.shape == nodeTile.shape){
         std::cout << "Replaced tile" <<  std::endl;
         l.replaceTile(n, index, l.headBag);
         counter = 7;
      } else {
         if(temp -> next != nullptr){
         temp = temp -> next;
         }
         counter++;
         index++;
      }
   }
  if (counter == 6){ std::cout << "Enter a valid tile" << std::endl;
   delete tile;
  }
}
#define EXIT_SUCCESS    0

int main(void) {
 Tile bagOfTiles[72];
 Tile* bagOfTilesptr[72];
   t.createTiles(bagOfTiles);
   r.shuffleBag(bagOfTiles);
   for (int i = 0; i < 72; i++){
      bagOfTilesptr[i] = &bagOfTiles[i];
   }
   
   for (int i = 0; i < 72; i++){
       Tile* temp = bagOfTilesptr[i];
       l.createBag(temp);
    }

   for (int i = 0; i < 5; i++){
       l.p1Head = l.deal(l.p1Head);
    }
printArray(l.p1Head);
    Tile* xd = new Tile('R', 1);
    tileComparePlace(l.p1Head,xd);

   printArray(l.p1Head);

   //  printList(l.p1Head);

   //  l.replaceTile(l.p1Head, 3, l.headBag);

   //  printList(l.p1Head);

   // printList(l.headBag);

   // l.p1Head = l.placeTile(l.p1Head, 2);

   // printList(l.p1Head);
   // printList(l.headBag);

   return EXIT_SUCCESS;
}