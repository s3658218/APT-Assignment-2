#include "Tile.h"
#include "TileCodes.h"
#include <iostream>

Tile::Tile(Colour colour, Shape shape) : colour(colour), shape(shape) {

}
Tile::Tile(){

}
Colour Tile::getColour() const{
    return colour;
}
Shape Tile::getShape() const{
    return shape;
}
void Tile::setColour(Colour colour) {
    Tile::colour = colour;
}
void Tile::setShape(Shape shape) {
    Tile::shape = shape;
}

<<<<<<< HEAD
void TileFunction::createTiles(Tile tiles[72]){
    int currentTile = 0;
    for (int i = 0; i < 6; i++){
        for (int j = 1; j < 7; j++){
            if (i == 0){
                tiles[currentTile].colour = RED;
                tiles[currentTile + 1].colour = RED;
            }else if (i == 1){
                tiles[currentTile].colour = ORANGE;
                tiles[currentTile + 1].colour = ORANGE;
            } else if (i == 2){
                tiles[currentTile].colour = YELLOW;
                tiles[currentTile + 1].colour = YELLOW;
            } else if (i == 3){
                tiles[currentTile].colour = GREEN;
                tiles[currentTile + 1].colour = GREEN;
            } else if (i == 4){
                tiles[currentTile].colour = BLUE;
                tiles[currentTile + 1].colour = BLUE;
            } else if (i == 5){
                tiles[currentTile].colour = PURPLE;
                tiles[currentTile + 1].colour = PURPLE;
            }
            tiles[currentTile].shape = j;
            tiles[currentTile + 1].shape = j;
            currentTile += 2;
        }
    }
}
void TileFunction::printTileBag(Tile tileBag[72]){
    for (int i = 0; i < 72; i++){
        std::cout << tileBag[i].colour << tileBag[i].shape << std::endl;
        if ((i + 1)% 12 == 0){
            std::cout << std::endl;
        }
    }
}
=======
// George was here :)
//:)
>>>>>>> d894682e56b5b9b9733fc278b985354789bf322d
