#include <iostream>

class Something {
   public:
    static int s_value;
};

int main() {
    std::cout << Something::s_value << '\n';
    return 0;
}