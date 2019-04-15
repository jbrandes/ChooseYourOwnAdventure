#include <iostream>

using namespace std;

class Player {
    
    public: 
    string name; 
    int health, damage;
    
};

int main ()
{
    
    Player Player1;
    Player1.name;
    Player1.health = 3;
    Player1.damage = 0;
    
    std::cout << "Welcome to the game! Before we begin, please give me your name." << endl;
    std::cin >> Player1.name;
    std::cout << "The game has now begun " << Player1.name << " make each move carefully. You only have three lives.";



  return 0;
}
