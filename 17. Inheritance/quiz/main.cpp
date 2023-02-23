#include <iostream>
#include <string>

#include "Creature.h"
#include "Monster.h"
#include "Player.h"

int main() {
    // Creature o{"orc", 'o', 4, 2, 10};
    // o.addGold(5);
    // o.reduceHealth(1);
    // std::cout << "The " << o.getName() << " has " << o.getHealth()
    //           << " health and is carrying " << o.getGold() << " gold.\n";

    // std::string name{};
    // std::cin >> name;

    // Player player{name};
    // std::cout << "Welcome, " << player.getName() << ".\n";
    // std::cout << "You have " << player.getHealth()
    //           << " health and you are carrying "
    //           << player.getGold() << " gold.\n";

    Monster m{Monster::Type::orc};
    std::cout << "A " << m.getName() << " (" << m.getSymbol() << ") was created.\n";

    return 0;
}