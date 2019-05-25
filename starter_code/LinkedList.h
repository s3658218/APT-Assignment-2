#ifndef ASSIGN2_LINKEDLIST_H
#define ASSIGN2_LINKEDLIST_H

#include "Node.h"
#include <string>

using std::string;
class LinkedList {
public:
   LinkedList();
   ~LinkedList();
   void createBag(Tile* tile);
   void addBackToBag(Node* hand);
   Node* replaceTile(Node* hand, int index, Node* bag);
   Node* placeTile(Node* hand, int index);
   Node* deal(Node* hand);
   bool tileComparePlace(Node* n, Tile* tile, bool check);
   bool tileCompareReplace(Node* n, Tile* tile, bool check);
   Node* headBag;
   Node* p1Head;
   Node* p2Head;
};


#endif // ASSIGN2_LINKEDLIST_H
