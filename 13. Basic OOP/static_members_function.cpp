#include <iostream>

class Something {
private:
  static int s_value;

public:
  static int getValue() { return s_value; }
  static int definedOutside();
};

int Something::s_value{1};
int Something::definedOutside() { return ++s_value; }

// Static member functions have no *this pointer
/*
 * Static member functions can directly access other static members
 * (variables or functions), but not non-static members. This is because
 * non-static members must belong to a class object, and static member
 * functions have no class object to work with!
 */

int main() {
  std::cout << Something::getValue() << '\n';
  return 0;
}
