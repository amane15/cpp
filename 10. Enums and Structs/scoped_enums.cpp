#include <iostream>

int main() {
  enum class Color {
    red,
    blue,
  };

  enum class Fruit {
    banana,
    apple,
  };

  Color color{Color::blue};
  Fruit fruit{Fruit::apple};

  return 0;
}
