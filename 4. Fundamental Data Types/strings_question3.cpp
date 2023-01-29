#include <iostream>
#include <string>

double getDouble() {
  std::cout << "Enter a double value: ";
  double x{};
  std::cin >> x;
  return x;
}

char getOperator() {
  std::cout << "Enter one of the following: +, -, *, or /: ";
  char operation{};
  std::cin >> operation;
  return operation;
}

void printResult(double x, char operation, double y) {
  if (operation == '+') {
    std::cout << x << " + " << y << " is " << x + y << '\n';
  } else if (operation == '-') {
    std::cout << x << " - " << y << " is " << x - y << '\n';
  } else if (operation == '*') {
    std::cout << x << " * " << y << " is " << x * y << '\n';
  } else if (operation == '/') {
    std::cout << x << " / " << y << " is " << x / y << '\n';
  }
}

int main() {
  double x{getDouble()};
  double y{getDouble()};

  char operation{getOperator()};

  printResult(x, operation, y);

  return 0;
}
