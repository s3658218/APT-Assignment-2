
#include "LinkedList.h"

#include <iostream>

#define EXIT_SUCCESS    0

//declaring proto-type function
void mainMenu();

int main(void) {
   LinkedList* list = new LinkedList();
   delete list;

   std::cout << "TODO: Implement Qwirkle!" << std::endl;

   //calling mainMenu function when program starts
   mainMenu();

   return EXIT_SUCCESS;
}

void mainMenu()
{
  std::cout << "Welcome to Qwirkle!" << std::endl;
  std::cout << "-------------------" << std::endl;
  std::cout << "\n";
  std::cout << "Main Menu" << std::endl;
  std::cout << "---------" << std::endl;

  std::cout << "1. New Game " << std::endl;
  std::cout << "2. Load Game " << std::endl;
  std::cout << "3. Show student information " << std::endl;
  std::cout << "4. Exit " << std::endl;
  std::cout << "\n";

}
