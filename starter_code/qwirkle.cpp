
#include "LinkedList.h"

#include <iostream>

#define EXIT_SUCCESS    0

//declaring proto-type function
void mainMenu();

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

  //read playerInput
  std::cout << "Enter: ";
  std::cin >> playerInput;

  //create do-while loop for user input
  do
  {
    if(playerInput = 1)
    {

    }
    else if(playerInput = 2)
    {

    }
    else if(playerInput = 3)
    {

    }
    else
    {

    }
  }
  while(playerInput != 4);

}
