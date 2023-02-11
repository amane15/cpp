#include <iostream>
#include <istream>
#include <ostream>
#include <string_view>

enum Color {
  red,
  green,
  blue,
};

enum Pet {
  cat,
  dog,
  pig,
  whale,
};

std::ostream &operator<<(std::ostream &out, Color color) {
  switch (color) {
  case red:
    out << "red";
    break;
  case blue:
    out << "blue";
    break;
  case green:
    out << "green";
    break;
  default:
    out << "???";
    break;
  }

  return out;
}

std::istream &operator>>(std::istream &in, Pet &pet) {
  int input{};
  in >> input;

  pet = static_cast<Pet>(input);

  return in;
}

constexpr std::string_view getColor(Color color) {
  switch (color) {
  case red:
    return "red";
  case green:
    return "green";
  case blue:
    return "blue";
  default:
    return "???";
  }
}

int main() {
  Color shirt{red};
  Pet pet{static_cast<Pet>(2)};
  pet = static_cast<Pet>(3);

  std::cout << "Color of shirt is " << getColor(shirt) << '\n';
  std::cout << "Your shirt is " << shirt << '\n';
  return 0;
}
