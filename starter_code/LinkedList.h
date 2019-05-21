
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
   Node* headBag;
   Node* p1Head;
   Node* p2Head;
};


#endif // ASSIGN2_LINKEDLIST_H
