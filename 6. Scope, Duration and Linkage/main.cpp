#include "constants.h"
#include <iostream>

// Global variables
int g_x{};

void print() { std::cout << "there\n"; }

// Defining namespace
namespace foo {
int doSomething(int x, int y) { return x + y; }
} // namespace foo

namespace goo {
int doSomething(int x, int y) { return x - y; }
} // namespace goo

int main() {
  // namespace aliases
  namespace active = goo;
  std::cout << foo::doSomething(4, 3) << '\n';
  std::cout << active::doSomething(3, 2) << '\n';
  ::print(); // call print() in global namespace

  std::cout << "The circumference is: " << 2.0 * constants::pi << '\n';
  return 0;
}

// Scope determines where a variable is accessible. Duration determines when a
// variable is created and destroyed. Linkage determines whether the variable
// can be exported to another file or not.

// Global variables have global scope (aka. file scope), which means they can be
// accessed from the point of declaration to the end of the file in which they
// are declared.

// Global variables have static duration, which means they are created when the
// program is started, and destroyed when it ends.

// Global variables can have either internal or external linkage, via the static
// and extern keywords respectively.
