#include <cstring>
#include <iostream>
#include <iterator>

int main() {
  // C style strings
  char myString[]{"string"};
  const int length{static_cast<int>(std::size(myString))};

  std::cout << "Length of string is " << length << '\n';

  for (int i{0}; i < length; ++i) {
    std::cout << static_cast<int>(myString[i]) << ' ';
  }

  std::cout << '\n';

  // Reading C style strings
  char name[255]{};
  std::cout << "Enter your name: ";
  // getline will read upto 254 characters
  std::cin.getline(name, std::size(name));
  std::cout << "You entered: " << name;

  // strcpy
  char source[]{"source"};
  char dest[50]{};
  std::strcpy(dest, source);
  std::cout << dest << '\n';

  // strlen
  std::cout << strlen(source) << '\n';

  // strcat() -- Appends one string to another (dangerous)
  // strncat() -- Appends one string to another (with buffer length check)
  // strcmp() -- Compare two strings (returns 0 if equal)
  // strncmp() -- Compare two strings up to a specific number of characters
  // (returns 0 if equal)
  return 0;
}
