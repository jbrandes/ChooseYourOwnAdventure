#include <iostream>

using namespace std;

class Player {
    
    public: 
    string name; 
    int health, damage;
    
    
    
};

class Door {
    
    public: 
    int damage;
};

int main ()
{
    
    Player Player1;
    Player1.name;
    Player1.health = 3;
    Player1.damage = 0;
    
    Door Door1;
    Door Door2;
    
    Door2.damage = 1;
    
    int choice = 0;
    
    if (Player1.health == 0)
    std::cout << "Game Over" << std::endl;
    
    if (Player1.damage >= 1)
    std::cout << "Be careful, you have taken one point of damage." << std::endl;
    
    std::cout << "Welcome to the game! Before we begin, please give me your name." << endl;
    std::cin >> Player1.name;
    std::cout << "The game has now begun " << Player1.name << " make each move carefully. You only have three lives." << endl;
    std::cout << "You wake up in a dark room with a pistol in your hand. You spot two doors in the distance. Which do you enter? 1 or 2?" << std::endl;
    std::cin >> choice;
    
    
    switch (choice) {
        case 1: 
        std::cout << "You pick up a torch and find yourself in a large bedroom with a treasure chest. Do you open the chest?" << std::endl;
        break;
        
        case 2: 
        std::cout << "You find yourself in darkness for a few minutes before falling down the stairs. Take one point of damage." << std::endl;
        Player1.damage = 1;
        Player1.health = 2;
        break;

    };
    
    std::cout << "Be careful " << Player1.name << " there are dangerous things ahead." << std::endl;
    

  return 0;
}
