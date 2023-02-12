#include <iostream>

int main() {
  int array[5]{9, 7, 5, 3, 1};

  std::cout << "Element 0 has address: " << &array[0] << '\n';

  std::cout << "The array decays to holding to a pointer holding address: "
            << array << '\n';

  std::cout << *array << '\n';

  for (int i{0}; i < 5; ++i) {
    std::cout << &array[i] << '\n';
  }

  return 0;
}
