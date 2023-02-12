#include <algorithm>
#include <array>
#include <cstddef>
#include <iostream>

struct House {
  int number{};
  int stories{};
  int roomPerStory{};
};

template <typename T, std::size_t size>
void printArray(const std::array<T, size>& arr) {
  for (auto element : arr) {
    std::cout << element << ' ';
  }
  std::cout << '\n';
}

int main() {
  std::array<int, 3> array;
  std::array<int, 5> array2{8, 3, 5, 4, 5};
  std::array array3{1, 2, 3};
  // C++20
  // std::array array4{std::to_array({1, 2, 3, 4})};
  std::cout << "Length of array: " << array3.size() << '\n';
  std::sort(array3.begin(), array3.end());

  for (auto element : array2) {
    std::cout << element << ' ';
  }

  // This works as expected
  std::array<House, 3> houses{
      // initializer for houses
      {
          // extra set of braces to initialize the C-style array member inside
          // the std::array struct
          {13, 4, 30}, // initializer for array element 0
          {14, 3, 10}, // initializer for array element 1
          {15, 3, 40}, // initializer for array element 2
      }};
  return 0;
}
