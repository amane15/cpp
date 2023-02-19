#include <cstdint>
#include <iostream>

class RGBA {
   public:
    using Channel = std::uint8_t;

   private:
    Channel m_red{};
    Channel m_blue{};
    Channel m_green{};
    Channel m_alpha{};

   public:
    RGBA(Channel red = 0, Channel blue = 0, Channel green = 0, Channel alpha = 255)
        : m_red{red}, m_blue{blue}, m_green{green}, m_alpha{alpha} {}

    void print() {
        std::cout << "r=" << static_cast<int>(m_red)
                  << " g=" << static_cast<int>(m_green)
                  << " b=" << static_cast<int>(m_blue)
                  << " a=" << static_cast<int>(m_alpha) << '\n';
    }
};

int main() {
    RGBA teal{0, 127, 127};
    teal.print();
}