#include <iostream>

int generateId() {
  static int s_itemID{};
  return s_itemID++;
}

void increamentAndPrint() {
  static int s_value{1};

  ++s_value;
  std::cout << s_value << '\n';
}

int main() {
  increamentAndPrint();
  increamentAndPrint();
  increamentAndPrint();

  return 0;
}
