#include <iostream>
#include <string>
#include <string_view>

void quiz1() {
  std::string name{};
  int age;

  std::cout << "Enter your name: ";
  std::getline(std::cin >> std::ws, name);

  std::cout << "Enter your age: ";
  std::cin >> age;

  std::cout << "Your age + length of name is " << name.length() + age << '\n';
}

void printSV(std::string_view str) { std::cout << str << '\n'; }

int main() {
  std::string name{"Darth Vader"};
  std::cout << "Henceforth you shall be knowns as " << name << '\n';

  // Use std::getline() to input text
  std::cout << "Whats the order \n";
  std::string line{};
  std::getline(std::cin, line);
  std::cout << line << '\n';
  // std::cout << "Pick 1 or 2: ";
  // int choice{};
  // std::cin >> choice;
  //
  // std::cout << "Now enter your name: ";
  // std::string name{};
  // // std::ws -> ignore any leading whitespace
  // std::getline(std::cin >> std::ws, name);
  //
  // std::cout << "Hello, " << name << ", you picked " << choice << '\n';
  std::cout << name << " has " << name.length() << " characters\n";
  int stringLength = static_cast<int>(name.length());

  quiz1();

  std::string_view stringView{"String View"};
  printSV(stringView);

  return 0;
}
