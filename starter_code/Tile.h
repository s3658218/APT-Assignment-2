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
   Tile(Colour colour, Shape shape);
   Tile();
   Colour getColour() const;
   Shape getShape() const;
   void setColour(Colour colour);
   void setShape(Shape shape);
<<<<<<< HEAD
   void createTiles(Tile tiles[72]);
=======
};

class TileFunction{
   public:
   void createTiles(Tile tiles[72]);
   void printTileBag(Tile tileBag[72]);
>>>>>>> fb74e5bc7a22004edf5fe9394714696b8da970fc
};


#endif // ASSIGN2_TILE_H
