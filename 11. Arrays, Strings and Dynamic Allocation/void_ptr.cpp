#include <iostream>

struct Something {
  int n{};
  float f{};
};

int main() {
  int nValue{5};
  float fValue{};
  Something sValue{};

  void* ptr;
  ptr = &fValue;
  ptr = &sValue;
  ptr = &nValue;

  // Dereferencing a void pointer is illegal.
  // Instead, the void pointer must first be cast to another pointer
  // type before the dereference can be performed.
  std::cout << *(static_cast<int*>(ptr)) << '\n';

  return 0;
}
