
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
void printArray(Tile tiles[72]){
   for (int i = 0; i < 72; i++){
   std::cout << tiles[i].colour << tiles[i].shape <<std::endl;
      if ((i + 1)% 12 == 0){
            std::cout << std::endl;
        }
   }
}
#define EXIT_SUCCESS    0

int main(void) {
 Tile bagOfTiles[72];
   Tile t;
   Randomiser r;
   LinkedList l;
   t.createTiles(bagOfTiles);
   r.shuffleBag(bagOfTiles);
   Tile* bagOfTilesptr[72];
   for (int i = 0; i < 72; i++){
      bagOfTilesptr[i] = &bagOfTiles[i];
   }

   printArray(*bagOfTilesptr);

   //   for (int i = 0; i < 72; i++){
   //     Tile* temp = bagOfTilesptr[i];
   //     l.createBag(temp);
   //  }

   //  for (int i = 0; i < 5; i++){
   //     l.p1Head = l.deal(l.p1Head);
   //  }

   //  printList(l.p1Head);

   //  l.replaceTile(l.p1Head, 3, l.headBag);

   //  printList(l.p1Head);

   // printList(l.headBag);

   // l.p1Head = l.placeTile(l.p1Head, 2);

   // printList(l.p1Head);
   // printList(l.headBag);

   return EXIT_SUCCESS;
}