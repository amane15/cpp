#include <iostream>
#include <string>

#include "Creature.h"
#include "Point2d.h"

int main() {
    std::cout << "Enter a name for your creature: ";
    std::string name;
    std::cin >> name;
    Creature creature{name, {4, 5}};
    
    while (true) {
        std::cout << creature << '\n';
        std::cout << '\n';

        std::cout << "Enter new X location for creature (-1 to Quit): ";
        int x{0};
        std::cin >> x;
        if (x == -1) break;

        std::cout << "Enter new Y location for creature (-1 to Quit): ";
        int y{0};
        std::cin >> y;
        if (y == -1) return 0;

        creature.moveTo(x, y);
    }

    return 0;
}