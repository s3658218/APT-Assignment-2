
#include "Tile.h"
#include "TileCodes.h"
#include <iostream>

void TileFunction::createTiles(Tile tiles[72]){
    int currentTile = 0;
    for (int i = 0; i < 6; i++){
        for (int j = 1; j < 7; j++){
            if (i == 0){
                tiles[currentTile].colour = 'R';
                tiles[currentTile + 1].colour = 'R';
            }else if (i == 1){
                tiles[currentTile].colour = 'O';
                tiles[currentTile + 1].colour = 'O';
            } else if (i == 2){
                tiles[currentTile].colour = 'Y';
                tiles[currentTile + 1].colour = 'Y';
            } else if (i == 3){
                tiles[currentTile].colour = 'G';
                tiles[currentTile + 1].colour = 'G';
            } else if (i == 4){
                tiles[currentTile].colour = 'B';
                tiles[currentTile + 1].colour = 'B';
            } else if (i == 5){
                tiles[currentTile].colour = 'p';
                tiles[currentTile + 1].colour = 'p';
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

//Tile createTileBag(Tile bagTiles[71]){
 //createTiles(bagTiles);
 //return bagTiles[71];
//}
// Empty... for now?
