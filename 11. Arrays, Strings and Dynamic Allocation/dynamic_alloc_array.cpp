#include <algorithm>
#include <iostream>

void question1() {
  std::cout << "How many names would you like to enter: ";
  int length{};
  std::cin >> length;

  std::string* names{new std::string[length]{}};

  for (int i{0}; i < length; ++i) {
    std::cout << "Enter name #" << i << ':';
    std::string name{};
    std::cin >> name;

    names[i] = name;
  }

  std::sort(names, names + length);

  for (int i{0}; i < length; ++i) {
    std::cout << names[i] << '\n';
  }

  delete[] names;
}

int main() {
  // std::cout << "Enter a positive integer: ";
  // int length{};
  // std::cin >> length;
  //
  // int* array{new int[length]};
  //
  // array[1] = 5;
  //
  // delete[] array;

  question1();
  return 0;
}
