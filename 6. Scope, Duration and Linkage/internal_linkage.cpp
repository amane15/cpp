#include <iostream>

/*
   “An identifier’s linkage determines whether other declarations of
   that name refer to the same object or not”,

   An identifier with internal linkage can be seen and used within a single
   file, but it is not accessible from other files (that is, it is not exposed
   to the linker). This means that if two files have identically named
   identifiers with internal linkage, those identifiers will be treated as
   independent.
*/

// non - constant globals have external linkage by default,
// but can be given internal linkage via the static keyword
// To make non constant variable internal we use the static keyword
static int g_x{};

// const globals have internal linkage by default
const int g_y{};
// also constexpr globals have internal linkage by default
constexpr int g_z{2};

// This function is declared as static, and can now be used only within this
// file Attempts to access it from another file via a function forward
// declaration will fail
[[maybe_unused]] static int add(int x, int y) { return x + y; }

int main() {
  std::cout << g_x << ' ' << g_y << ' ' << g_z << '\n';
  return 0;
}
