#include <iostream>

int sumOfDigits(int number) {
  if (number < 10)
    return number;

  return sumOfDigits(number / 10) + number % 10;
}

int main() {
  std::cout << sumOfDigits(93427) << '\n';
  return 0;
}