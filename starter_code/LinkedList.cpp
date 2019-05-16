
#include "LinkedList.h"
#include "Tile.h"
#include "TileCodes.h"
#include <iostream>
void removeNode(Node* n){
Node* temp = n -> next;
if (n -> next != nullptr){
   n -> tile = temp -> tile;
   n -> next = temp -> next;
   free(temp);
}else{
   n = nullptr;
   free(temp);
 }
}
Node* addBackToBag(Node* head, Node* hand){
   Node* tmp = new Node();
   Tile* temp = hand -> tile;
   tmp -> tile = temp;
   tmp -> next = nullptr;
   Node *ptr = head;
   if (head == nullptr){
      head = tmp;
      removeNode (hand);
      return head;
   }
   while (ptr -> next != nullptr){
      ptr = ptr -> next;
   }
   ptr -> next = tmp;
   ptr = ptr -> next;
   removeNode(hand);
   return head;
}
Node* createBag(Tile* tile, Node* n){
   Node* tmp = new Node();
   tmp -> tile = tile;
   tmp -> next = nullptr;
   std::cout << tmp -> tile << std::endl;
   Node* ptr = n; //head of linked list
   if (n == nullptr){
      n = tmp;
      return n;
   }
   while (ptr -> next != nullptr){
      ptr = ptr -> next;
   }
   ptr -> next = tmp;
   ptr = ptr -> next;
   return n;
}

Node* addToHand(Node* bagHead, Node* hand){
   Node* tmp = new Node();
   tmp = bagHead;
   tmp -> next = nullptr;
   Node* ptr = hand;
   if (hand == nullptr){
      hand = tmp;
      removeNode(bagHead);
      std::cout << tmp -> tile << std::endl;
      return hand;
   }
   while (ptr != nullptr){
      ptr = ptr -> next;
   }
   ptr -> next = tmp;
   ptr = ptr -> next;
   removeNode(bagHead);
     std::cout << tmp -> tile << std::endl;
   return hand;
}

void printList(Node *n){
   int test=0;
    while (n != nullptr){
        std::cout << n -> tile << "" << std::endl;
        n = n -> next;
        test++;
 }
 std::cout << test << std::endl;
}
void printTileBag(Tile tileBag[72]){
   int check = 0;
   for (int i = 0; i < 72; i++){
        std::cout << tileBag[i].colour << tileBag[i].shape << std::endl;
        check++;
        if ((i + 1)% 12 == 0){
            std::cout << std::endl;
        }
    }
    std::cout << check << std::endl;
}
LinkedList::LinkedList() {
   // headBag = nullptr;
   //bag = nullptr;
   // tailBag = nullptr;
   p1HeadHand = nullptr;
   Tile bagOfTiles[72];
   TileFunction b;
   b.createTiles(bagOfTiles);
   Tile* bagOfTilesptr[72];
   for (int i = 0; i < 72; i++){
      bagOfTilesptr[i] = &bagOfTiles[i];
      
   }
    printTileBag(*bagOfTilesptr);

    // https://www.youtube.com/watch?v=o5wJkJJpKtM help with understanding linked lists
   // for (int i = 0; i < 72; i++){
   //   // Setting the head node
   //    if (headBag == nullptr){
   //    bag = new Node();
   //    bag -> tile = bagOfTilesptr[i];
   //    bag -> next = nullptr;
   //    headBag = bag;
   //    tailBag = bag;
   //    } else {
   //       //https://www.youtube.com/watch?v=o5wJkJJpKtM helps understand this bit
   //       bag = new Node(); //create a new node
   //       bag -> tile = bagOfTilesptr[i]; //insert the pointer value of the tile
   //       bag -> next = nullptr;
   //       tailBag -> next = bag; //links the first node to this new tile
   //       tailBag = tailBag -> next; //next pointer is now pointing to the new node next
   //    }
   //  }
    for (int i = 0; i < 72; i++){
       Tile* temp = bagOfTilesptr[i];
       headBag = createBag(temp, headBag);
        //std::cout << headBag -> tile << std::endl;
    }
   printList(headBag);
   //  deal(headBag,p1HeadHand);
   // for (int i = 0; i < 2; i++){
   //  p1HeadHand = addBackToBag(p1HeadHand,headBag);
   // }
   //  printList(p1HeadHand);
   //  printList(headBag);
}

LinkedList::~LinkedList() {
}



//All made in a main for testing purposes
int main(){
   LinkedList();
   // Tile testBag[72];
   // Node* headBag;
   // Node* bag;
   // Node* tailBag;
   // // Node* player1Hand;
   // // Node* player1HeadHand;
   // // Node* player1TailHand;
   // //Node* player2Hand;
   // //Node* player2HeadHand;
   // // Node* player2TailHand;
   // headBag = nullptr;
   // tailBag = nullptr;
   // //Checking if I can pass the tiles from tile.cpp
   // Tile bagOfTiles[72];
   // //NodeFunctions a;
   // TileFunction b;
   // b.createTiles(bagOfTiles);
   // Tile* bagOfTilesptr[72];
   // for (int i = 0; i < 72; i++){
   //    bagOfTilesptr[i] = &bagOfTiles[i];
   // }
   // //Creating a bag linked list
   // printTileBag(*bagOfTilesptr);
   // for (int i = 0; i < 72; i++){
   //   // Setting the head node
   //    if (i == 0){
   //    bag = new Node();
   //    bag -> tile = bagOfTilesptr[i];
   //    headBag = bag;
   //    tailBag = bag;
   //    } else {
   //       //https://www.youtube.com/watch?v=o5wJkJJpKtM helps understand this bit
   //       bag = new Node(); //create a new node
   //       bag -> tile = bagOfTilesptr[i]; //insert the pointer value of the tile
   //       tailBag -> next = bag; //links the first node to this new tile
   //       tailBag = tailBag -> next; //next pointer is now pointing to the new node next
   //    }
   //  }

   // //  for (int i = 0; i < 5;){
   // //     if (i == 0){
   // //        player1HeadHand = new Node();
   // //        player1Hand = new Node();
   // //        player1Hand -> tile = nullptr;
   // //        player1HeadHand = player1Hand;
   // //        player1TailHand = player1Hand;
   // //     } else {
   // //        player1Hand = new Node();
   // //        player1Hand -> tile = nullptr;
   // //        player1TailHand = player1TailHand -> next;
   // //     }
   // //  }
   // //  for (int i = 0; i < 5;){
   // //     if (i == 0){
   // //        player2HeadHand = new Node();
   // //        player2Hand = new Node();
   // //        player2Hand -> tile = nullptr;
   // //        player2Hand -> next = player1Hand;
   // //        player2HeadHand = player2Hand;
   // //        player2TailHand = player2Hand;
   // //     } else {
   // //        player2Hand = new Node();
   // //        player2Hand -> tile = nullptr;
   // //        player2TailHand -> next = player2Hand;
   // //        player2TailHand = player2TailHand -> next;
   // //     }
   // //  }
   // //fillBag(bagOfTiles, headBag);
   // printList(headBag);
   // for (int i = 0; i < 72; i++){
   //     if (headBag != nullptr){
   //         testBag[i] = *headBag -> tile;
   //         headBag = headBag -> next;
   //     } 
   //  }
   //  printTileBag(testBag);
   //  //a.deal(headBag,player1HeadHand);
   //  //printList(player1HeadHand);
   //  //printList(headBag);
   // // printList(player1HeadHand);
   // // printList(player2HeadHand);
}
