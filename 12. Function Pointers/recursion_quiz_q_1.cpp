#include <iostream>

int factorial(int number) {
  if (number == 1)
    return 1;
  return number * factorial(number - 1);
}

int main() {
  std::cout << factorial(7) << '\n';
  return 0;
}