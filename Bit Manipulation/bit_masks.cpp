#include <iostream>

std::string checkBit(std::uint8_t flags, std::uint8_t mask) {
  return (flags & mask) ? "on\n" : "off\n";
}

int main() {
  [[maybe_unused]] constexpr std::uint8_t mask0{0b0000'0001};
  [[maybe_unused]] constexpr std::uint8_t mask1{0b0000'0010};
  [[maybe_unused]] constexpr std::uint8_t mask2{0b0000'0100};
  [[maybe_unused]] constexpr std::uint8_t mask3{0b0000'1000};
  [[maybe_unused]] constexpr std::uint8_t mask4{0b0001'0000};
  [[maybe_unused]] constexpr std::uint8_t mask5{0b0010'0000};
  [[maybe_unused]] constexpr std::uint8_t mask6{0b0100'0000};
  [[maybe_unused]] constexpr std::uint8_t mask7{0b1000'0000};

  std::uint8_t flags{0b0000'0101};

  std::cout << "bit 0 is " << checkBit(flags, mask0);
  std::cout << "bit 1 is " << checkBit(flags, mask0);

  // Setting bit
  // To set a bit use OR
  std::cout << "bit 1 is " << checkBit(flags, mask1);
  flags |= mask1; // turn on bit 1
  std::cout << "bit 1 is " << checkBit(flags, mask1);
  flags |= (mask4 | mask5); // turn bits 4 and 5 on at the same time

  // Resetting bit
  // To clear bit use Bitwise AND and Bitwise OR together
  std::cout << "bit 2 is " << checkBit(flags, mask2);
  flags &= ~mask2;
  std::cout << "bit 2 is " << checkBit(flags, mask2);
  flags &= ~(mask4 | mask5); // turn bits 4 and 5 off at the same time

  // Flipping bit
  // To toggle a bit state use Bitwise XOR
  std::cout << "bit 2 is " << checkBit(flags, mask2);
  flags ^= mask2; // flip a bit 2
  std::cout << "bit 2 is " << checkBit(flags, mask2);
  flags ^= mask2; // flip a bit 2
  std::cout << "bit 2 is " << checkBit(flags, mask2);

  return 0;
}
