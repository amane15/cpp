#include <iostream>

namespace animals {
enum Animals {
  chicken,
  dog,
  cat,
  elephant,
  duck,
  snake,
  max_animals,
};
}

int main() {
  double temperature[365]{};
  int numberOfLegs[animals::max_animals]{2, 4, 4, 4, 2, 0};

  std::cout << numberOfLegs[animals::elephant] << '\n';
  return 0;
}
