using std::cin;
using std::cout;
using std::endl;

#include "Player.cpp"

void mainMenu()
{

  //create do-while loop for user input
  do
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
    std::cout << "Enter Input: ";
    std::cin >> playerInput;

    if(playerInput == 1)
    {
      newGame();
    }
    else if(playerInput == 2)
    {
      loadGame();
    }
    else if(playerInput == 3)
    {
      studentInfo();
    }
    else
    {
      std::cout << "Enter a valid response from menu" << std::endl;
    }
  }
  while(playerInput != 4);


}

void newGame() {
  cout << "Starting a New Game\n" << endl;
  cout << "Enter a name for player 1 (uppercase characters only)" << endl;
  cin << player1 << endl;
  cout << "Enter a name for Player 2 (uppercase characters only)" << endl;
  cin << player2 << endl;
  cout << endl;
  cout << "Let's Play!";
}

void loadGame() {
  cout << "Enter the filename from which load a game" << endl;
}

void studentInfo() {
    cout << "Name: George Korovinis" << endl;
    cout << "Student ID: s3658218" << endl;
    cout << "Email: s3658218@student.rmit.edu.au" << endl;

    cout << "Name: Tylar Lariba-Taing" << endl;
    cout << "Student ID: s3604139" << endl;
    cout << "Email: s3604139@student.rmit.edu.au" << endl;

    cout << "Name: Lorenzo Vossos" << endl;
    cout << "Student ID: s3792797" << endl;
    cout << "Email: s3792797@student.rmit.edu.au" << endl;

}

void quit() {
  cout << "Goodbye" << endl;
  EXIT_SUCCESS;
}
