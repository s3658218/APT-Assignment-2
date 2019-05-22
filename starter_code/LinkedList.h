#ifndef ASSIGN2_LINKEDLIST_H
#define ASSIGN2_LINKEDLIST_H

#include "Node.h"
class LinkedList {
public:
   LinkedList();
   ~LinkedList();
   void createBag(Tile* tile);
   void addBackToBag(Node* hand);
   Node* replaceTile(Node* hand, int index, Node* bag);
   Node* placeTile(Node* hand, int index);
   Node* deal(Node* hand);
<<<<<<< HEAD
   void tileComparePlace(Node* n, Tile* tile, bool check);
   void tileCompareReplace(Node* n, Tile* tile, bool check);
=======
>>>>>>> fb74e5bc7a22004edf5fe9394714696b8da970fc
   Node* headBag;
   Node* p1Head;
   Node* p2Head;
};


<<<<<<< HEAD
#endif // ASSIGN2_LINKEDLIST_H
=======
#endif // ASSIGN2_LINKEDLIST_H
>>>>>>> fb74e5bc7a22004edf5fe9394714696b8da970fc
