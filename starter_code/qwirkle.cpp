
#include "LinkedList.h"
#include "GameMenu.h"

#include <iostream>

#define EXIT_SUCCESS    0

//define namespaces
using std::string;
using std::cout;
using std::endl;

GameMenu g;

//declaring proto-type function
void mainMenu();

int main(void)
{
   //calling mainMenu function when program starts
   g.mainMenu();

   return EXIT_SUCCESS;
}


// ~~~CHECKLIST~~~
// - LORENZO: Add Save and Load funcitons
// - TYLAR: Implement LinkedList and randomiser into my code
// - GEORGE: Figure out Tiles tomorrow and
//:)
