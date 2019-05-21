
#define NULL 0
#include <iostream>
#include "Randomiser.h"
#include <random>
using std::cout;



void Randomiser::shuffleBag(Tile shuffle[72]){
//creating a random seed
std::random_device engine;
//settiing the range to meet the length of the array
int min = 0;
int max = 71;
std::uniform_int_distribution<int> uniform_dist(min,max);
//shuffle method
for (int i = 0; i < 72; i++){
    //gets a random position between 0 - 2 and stores it
    int r = uniform_dist(engine);
    //storing the i into a temp location
    Tile tempShuffle = shuffle[i];
    //swapping i with the random position
    shuffle[i] = shuffle[r];
    //swapping the random position with the temp value
    shuffle[r] = tempShuffle;
  }
}
