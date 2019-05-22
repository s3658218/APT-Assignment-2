
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

void Tile::createTiles(Tile tiles[72]){
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



//Tile createTileBag(Tile bagTiles[71]){
 //createTiles(bagTiles);
 //return bagTiles[71];
//}
// Empty... for now?
