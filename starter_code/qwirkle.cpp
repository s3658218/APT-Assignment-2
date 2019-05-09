#include "LinkedList.h"
#include "GameMenu.cpp"
#include "MenuFunctions.cpp"
#include <iostream>

#define EXIT_SUCCESS    0

//define namespaces
using std::string;
using std::cout;
using std::endl;

//global vars
int playerInput = 0;

int main(void)
{
   LinkedList* list = new LinkedList();
   delete list;

   std::cout << "TODO: Implement Qwirkle!" << std::endl;

   //calling mainMenu function when program starts
   mainMenu();

   return EXIT_SUCCESS;
}
