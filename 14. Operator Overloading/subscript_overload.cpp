#include <cassert>
#include <iostream>

class IntList {
private:
  int m_list[10]{};

public:
  int& operator[](int index);
  int operator[](int index) const;
};

int& IntList::operator[](int index) {
  assert(index >= 0 && index < std::size(m_list));
  return m_list[index];
}

int IntList::operator[](int index) const {
  return m_list[index];
}

int main() {
  IntList list{};
}
