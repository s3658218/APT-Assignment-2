
#include "LinkedList.h"
#include "GameMenu.h"

#include <iostream>

#define EXIT_SUCCESS    0

//define namespaces
using std::string;
using std::cout;
using std::endl;

//declaring proto-type function
void mainMenu();

int main(void)
{
   //calling mainMenu function when program starts
   mainMenu();

   return EXIT_SUCCESS;
}
