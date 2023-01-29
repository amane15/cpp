#include <iostream>

int isEven(int i) {
  if (i % 2 == 0) {
    return true;
  }
  return false;
}

int main() {
  int i;
  std::cout << "Enter an integer: ";
  std::cin >> i;

  if (isEven(i)) {
    std::cout << i << " is even\n";
  } else {
    std::cout << i << " is odd\n";
  }
}
