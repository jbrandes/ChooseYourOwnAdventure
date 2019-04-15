#include <iostream>
#include "player.h"



using namespace std;

int main()
{
    int name;
    int health = 3;
 
    std::cout << "Welcome to the game! Before we begin, what is your name?" << std::endl;
    std::cin >> name;
    std::cout << "Welcome " << name << "you have three lives on this journey, use them well." << std::endl;
}
