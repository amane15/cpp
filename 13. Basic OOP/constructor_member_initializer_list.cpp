#include <iostream>

class Something {
   private:
    // int m_value1;
    // double m_value2;
    // char m_value3;
    int m_const_value;
    // non static member initialization
    int m_value4{1};

   public:
    // Member initializer list
    // Something(int value1, double value2, char value3)
    //     : m_value1{value1}, m_value2{value2}, m_value3{value3} {
    // }
    Something(int value) : m_const_value{value} {}

    void print() {
        // std::cout << "Something(" << m_value1 << ", " << m_value2 << ", " << m_value3 << ")" << '\n';
        std::cout << "Something(" << m_const_value << ")" << '\n';
    }
};

int main() {
    int x{109};

    Something s{x};
    s.print();
}