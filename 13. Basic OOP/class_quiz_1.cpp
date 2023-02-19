#include <iostream>

class IntPair {
   public:
    int m_first{};
    int m_second{};

    void set(int first, int second) {
        m_first = first;
        m_second = second;
    }

    void print() {
        std::cout << "Pair(" << m_first << ", " << m_second << ")" << '\n';
    }
};

int main() {
    IntPair p1{};
    p1.set(1, 2);

    IntPair p2;
    p2.set(5, 6);

    p1.print();
    p2.print();

    return 0;
}