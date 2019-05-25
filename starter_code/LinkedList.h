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
   void tileComparePlace(Node* n, Tile* tile);
   void tileCompareReplace(string player, Tile* tile, bool check);
   Node* headBag;
   Node* p1Head;
   Node* p2Head;
};


#endif // ASSIGN2_LINKEDLIST_H
