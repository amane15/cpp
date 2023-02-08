#include <iostream>

const std::string& getProgramName() {
    static const std::string s_programName{"calculator"};

    return s_programName;
}

// It’s okay to return reference parameters by reference
const std::string& firstAlphabetical(const std::string& a, const std::string& b) {
    return (a < b) ? a : b;
}

int& max(int& x, int& y) {
    return (x > y) ? x : y;
}

int main() {
    std::cout << "This program is named " << getProgramName() << '\n';

    std::string hello{"hello"};
    std::string world{"world"};

    std::cout << firstAlphabetical(hello, world);
    // The caller can modify values through the reference
    int a{5};
    int b{6};
    max(a, b) = 7;
    
}