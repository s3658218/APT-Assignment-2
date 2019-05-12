
#include "Tile.h"
#include "TileCodes.h"
#include <iostream>

void createTiles(Tile tileBag[71]){
    int currentTile = 0;
    for (int i = 0; i < 6; i++){
        for (int j = 1; j < 7; j++){
            if (i == 0){
                tileBag[currentTile].colour = 'R';
                tileBag[currentTile + 1].colour = 'R';
            }else if (i == 1){
                tileBag[currentTile].colour = 'O';
                tileBag[currentTile + 1].colour = 'O';
            } else if (i == 2){
                tileBag[currentTile].colour = 'Y';
                tileBag[currentTile + 1].colour = 'Y';
            } else if (i == 3){
                tileBag[currentTile].colour = 'G';
                tileBag[currentTile + 1].colour = 'G';
            } else if (i == 4){
                tileBag[currentTile].colour = 'B';
                tileBag[currentTile + 1].colour = 'B';
            } else if (i == 5){
                tileBag[currentTile].colour = 'p';
                tileBag[currentTile + 1].colour = 'p';
            }
            tileBag[currentTile].shape = j;
            tileBag[currentTile + 1].shape = j;
            currentTile += 2;
        }
    }
}
void printTileBag(Tile tileBag[71]){
    for (int i = 0; i < 72; i++){
        std::cout << tileBag[i].colour << tileBag[i].shape << std::endl;
        if ((i + 1)% 12 == 0){
            std::cout << std::endl;
        }
    }
}

int main(){
Tile bagTiles[71];

 createTiles(bagTiles);
 printTileBag(bagTiles);

}
// Empty... for now?
