#include "add.h"
#include <iostream>

// Conditional Compilation
/* The #ifdef preprocessor directive allows the preprocessor to check whether an
 * identifier has been previously #defined. If so, the code between the #ifdef
 * and matching #endif is compiled. If not, the code is ignored. */

// #ifndef is the opposite of #ifdef, in that it allows you to check whether an
// identifier has NOT been #defined yet.

// Object-like macros
#define MY_NAME "Abc"

// header guards
#ifndef SOME_UNIQUE_NAME_HERE
#define SOME_UNIQUE_NAME_HERE

// your declarations (and certain types of definitions) here

#endif

// Forward declaration
int add(int x, int y);

int getValueFromUser() {
  std::cout << "Enter an integer: ";
  int input{};
  std::cin >> input;

  return input;
}

void printDouble(int value) {
  std::cout << value << " doubled is: " << value * 2 << "\n";
}

int main() {
  int num{getValueFromUser()};

  printDouble(num);
  std::cout << add(3, 4) << "\n";
  std::cout << MY_NAME << "\n";

#ifdef PRINT_JOE
  std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
#endif

#ifdef PRINT_BOB
  std::cout << "Bob\n"; // will be ignored since PRINT_BOB is not defined
#endif

#ifndef PRINT_BOB
  std::cout << "Bob\n";
#endif

#if 0  // Don't compile anything starting here
    std::cout << "Bob\n";
    std::cout << "Steve\n";
#endif // until this point

  return 0;
}
