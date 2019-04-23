
#include <iostream>
#include <string>



using namespace std;

class Player
{

public:
  string name;
  int damage;

};




void
rightDoor ()
{

  std::cout <<
    "You spot an open window. Do you jump to try and escape the fire or find another exit?"
    << std::endl;
  return;
}

void
leftDoor ()
{
  string answer;
  std::cout <<
    "There is a staircase ahead of you. Would you like to go up or down it?"
    << std::endl;
  std::cin >> answer;
  if (answer == "up")
    {
      std::cout <<
	"There is an open window. Would you like to jump out of it?" <<
	std::endl;
    }
  else
    (answer == "down");
  {

    std::cout << "You've found yourself in the dungeon." << std::endl;
  }
  return;

}


void
doorChoice ()
{
  string answer;
  if (answer == "door one")
    {
      std::cout <<
	"This room doesn't seem to be on fire. You're winning already." <<
	std::endl;
      rightDoor ();

    }
  else
    {
      std::cout <<
	"The fire has swept through this part of the house." << std::endl;
      leftDoor ();
    }

}





int
main ()
{



  Player Player1;
  Player1.name;


  std::cout <<
    "Greetings player. Before you start on your quest tell me your name." <<
    std::endl;
  std::cin >> Player1.name;
  std::cout << "Are you ready for an adventure " << Player1.name << "?" <<
    std::endl;
  std::cout << "You awake groggily in room that is filled with flames." <<
    std::endl;
  std::cout <<
    "Ahead of you are two doors, which do you choose? Door number 1 or door number 2?"
    << std::endl;
  doorChoice (); 
  std::cout << "Game Over" << std::endl;


  return 0;
}
