/*
 Question

 * Write a program that prints out the letters a through z
 * along with their ASCII codes.
*/

#include <iostream>

int main() {
    char letter{'a'};

    while (letter <= 'z') {
        std::cout << letter << ' ' << static_cast<int>(letter) << '\n';
        ++letter;
    }
}