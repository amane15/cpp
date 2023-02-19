#include <iostream>

class Something {
   public:
    int m_value{};

    Something() : m_value{0} {}

    void setValue(int value) { m_value = value; }
    // const member function
    int getValue() const { return m_value; }
};

int main() {
    const Something something{};

    std::cout << something.getValue() << '\n';

    return 0;
}
