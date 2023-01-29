#include <bitset>
#include <iostream>

/*
Question:
   A bitwise rotation is like a bitwise shift, except that any bits shifted off
   one end are added back to the other end. For example 0b1001u << 1 would be
   0b0010u, but a left rotate by 1 would result in 0b0011u instead. Implement a
   function that does a left rotate on a std::bitset<4>. For this one, it’s okay
   to use test() and set().
*/

std::bitset<4> rotl(std::bitset<4> bits) {
  // std::bitset<4> temp{bits << 1};
  // if (!bits.test(3)) {
  //   temp.reset(0);
  // } else {
  //   temp.set(0);
  // }
  // return temp;
  const bool leftBit{bits.test(3)};
  bits <<= 1;

  if (leftBit)
    bits.set(0);

  return bits;
}

std::bitset<4> rotlW(std::bitset<4> bits) { return (bits << 1) | (bits >> 3); }

int main() {
  std::bitset<4> bits1{0b0001};
  std::cout << rotl(bits1) << '\n';

  std::bitset<4> bits2{0b1001};
  std::cout << rotl(bits2) << '\n';

  return 0;
}
