
#include "LinkedList.h"
#include "Randomiser.h"

#include <iostream>
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
#define EXIT_SUCCESS    0

int main(void) {
 Tile bagOfTiles[72];
 Tile* bagOfTilesptr[72];
   Tile t;
   Randomiser r;
   LinkedList l;
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

   //  printList(l.p1Head);

   //  l.replaceTile(l.p1Head, 3, l.headBag);

   //  printList(l.p1Head);

   // printList(l.headBag);

   // l.p1Head = l.placeTile(l.p1Head, 2);

   // printList(l.p1Head);
   // printList(l.headBag);

   return EXIT_SUCCESS;
}