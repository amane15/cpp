#include <iostream>

int main() {
  int value{15};
  int* ptr{&value};
  int** ptrptr{&ptr};

  std::cout << **ptrptr << '\n';

  // Array of pointers
  int** array{new int*[10]};

  delete[] array;
  array = nullptr;

  return 0;
}
