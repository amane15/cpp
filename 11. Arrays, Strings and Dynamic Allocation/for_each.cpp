#include <iostream>
#include <string_view>

void question1() {
  std::string_view names[]{"Alex",  "Betty", "Caroline", "Dave",
                           "Emily", "Fred",  "Greg",     "Holly"};

  std::cout << "Enter a name: ";
  std::string username{};
  std::cin >> username;

  bool found{false};

  for (std::string_view name : names) {
    if (name == username) {
      found = true;
      break;
    }
  }

  if (found) {
    std::cout << username << " was found\n";
  } else {
    std::cout << username << " was not found\n";
  }
};

int main() {
  /*
     for each syntax
     for (element_declaration: array) {}
     */

  constexpr int fibonacci[]{0, 1, 1, 2, 3, 5, 8, 13};

  for (auto number : fibonacci) {
    std::cout << number << ' ';
  }
  std::cout << '\n';

  std::string array[]{"train", "local", "computer"};
  for (const auto& element : array) {
    std::cout << element << ' ';
  }
  std::cout << '\n';
}
