#include <bitset>
#include <iostream>

int main() {
  std::bitset<8> bits{0b0000'0101}; // bitset not useful for memory saving
  bits.set(3);                      // set bit position 3 to 1
  bits.flip(4);
  bits.reset(4);

  std::cout << "All the bits: " << bits << '\n';
  std::cout << "Bit 3 has value: " << bits.test(3) << '\n';
  std::cout << "Bit 4 has value: " << bits.test(4) << '\n';
  std::cout << sizeof(size_t) << '\n';

  // Left Shift and Right Shift Operator
  std::bitset<4> x{0b1100};

  std::cout << x << '\n';
  std::cout << "Right Shift " << (x >> 1) << '\n';
  std::cout << "Left Shift " << (x << 1) << '\n';

  // Bitwise NOT
  std::cout << ~std::bitset<4>{0b0101} << '\n';

  // Bitwise OR
  std::bitset<8> or1{0b0011};
  std::bitset<8> or2{0b1010};
  std::cout << "OR operation " << (or1 | or2) << '\n';

  // Bitwise AND
  std::bitset<8> and1{0b0011};
  std::bitset<8> and2{0b1010};
  std::cout << "AND operation " << (and1 | and2) << '\n';

  // Bitwise XOR
  std::bitset<8> xor1{0b0011};
  std::bitset<8> xor2{0b1010};
  std::cout << "xOR operation " << (xor1 | xor2) << '\n';
}
