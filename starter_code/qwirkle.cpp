
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
   Tile hand[6];
   //creating a pointer array to store the node value
   Tile* handptr[6];
   for (int i = 0; i < 6; i++){
   //storing node value into pointer array
   handptr[i] = n -> tile;
   //storing dereferencing the pointer and storing it into a temp hand
   hand[i] = *handptr[i];
   std::cout << hand[i].colour << hand[i].shape << " ";
   //going to the next node
   n = n -> next;
   }
   std::cout << std::endl;
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

   for (int i = 0; i < 6; i++){
       l.p1Head = l.deal(l.p1Head);
    }
   printArray(l.p1Head);
    Tile* xd = new Tile('R', 1);
    l.tileComparePlace(l.p1Head,xd);

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