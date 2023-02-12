#include <ios>
#include <iostream>
#include <iterator>
#include <limits>

int getInput() {
  int input;
  while (true) {
    std::cout << "Enter number between 1 and 9:";
    std::cin >> input;

    if (std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } else if (input < 1 || input > 9) {
      continue;
    } else {
      break;
    }
  }

  return input;
}

int main() {
  constexpr int numbers[]{1, 2, 3, 4, 5, 6, 7, 8, 9};
  int input{getInput()};
  int index{};

  for (int i{0}; i < std::size(numbers); i++) {
    std::cout << numbers[i] << ' ';
    if (numbers[i] == input) {
      index = i;
    }
  }
  std::cout << '\n';
  std::cout << "The number " << input << " has index " << index << '\n';

  return 0;
}
