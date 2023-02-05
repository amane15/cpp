#include <iostream>

void numberPattern() {
    int outer{1};

    while (outer <= 5) {
        int inner{1};

        while (inner <= outer) {
            std::cout << inner << ' ';
            ++inner;
        }

        std::cout << '\n';
        ++outer;
    }
}

int main() {
    int count{1};

    while (count <= 50) {
        // pad numbers under 10 with a leading 0 for formatting purpose
        if (count < 10) {
            std::cout << '0';
        }
        std::cout << count << ' ';

        if (count % 10 == 0) {
            std::cout << '\n';
        }

        ++count;
    }

    numberPattern();

    return 0;
}