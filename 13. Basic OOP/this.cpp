#include <iostream>

class Calc {
   private:
    int m_value{};

   public:
    Calc& add(int value) {
        m_value += value;
        return *this;
    }

    Calc& sub(int value) {
        m_value -= value;
        return *this;
    }

    Calc& mul(int value) {
        m_value *= value;
        return *this;
    }

    int getValue() {
        return m_value;
    }
};

int main() {
    // chaining member functions
    Calc calc{};
    calc.add(5).sub(13).mul(300);

    std::cout << calc.getValue() << '\n';

    return 0;
}