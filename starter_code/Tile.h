
#ifndef ASSIGN2_TILE_H
#define ASSIGN2_TILE_H

// Define a Colour type
typedef char Colour;

// Define a Shape type
typedef int Shape;


class Tile {
public:
   Colour colour;
   Shape  shape;
};

class TileFunction{
   public:
   void createTiles(Tile tiles[71]);
   void printTileBag(Tile tileBag[71]);
};

#endif // ASSIGN2_TILE_H
