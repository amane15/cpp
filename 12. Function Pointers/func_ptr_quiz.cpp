#include <functional>
#include <iostream>

int getInteger() {
  std::cout << "Enter an integer: ";
  int x{};
  std::cin >> x;
  return x;
}

char getOperation() {
  char operation{};

  do {
    std::cout << "Enter an operation ('+','-','*','/')";
    std::cin >> operation;
  } while (operation != '+' && operation != '-' && operation != '*' &&
           operation != '/');

  return operation;
}

int add(int x, int y) {
  return x + y;
}

int subract(int x, int y) {
  return x - y;
}

int multiply(int x, int y) {
  return x * y;
}

int divide(int x, int y) {
  return x / y;
}

// std::function alternate method of storing function pointer
using ArithmeticFunction = std::function<int(int, int)>;

ArithmeticFunction getArithmeticFunction(char operation) {
  switch (operation) {
  case '+':
    return &add;
  case '-':
    return &subract;
  case '*':
    return &multiply;
  case '/':
    return &divide;
  }
}

int main() {
  int x{getInteger()};
  char operation{getOperation()};
  int y{getInteger()};

  ArithmeticFunction func{getArithmeticFunction(operation)};
  if (func) {
    std::cout << x << ' ' << operation << ' ' << y << " = " << func(x, y)
              << '\n';
  }

  return 0;
}