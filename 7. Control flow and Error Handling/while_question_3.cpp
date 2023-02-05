/*
 Question
 * Invert the nested loops example so it prints the following:
    5 4 3 2 1
    4 3 2 1
    3 2 1
    2 1
    1
*/

#include <iostream>

int main() {
    int outer{5};

    while (outer >= 1) {
        int inner{outer};

        while (inner != 0) {
            std::cout << inner << ' ';
            --inner;
        }

        std::cout << '\n';
        --outer;
    }
}