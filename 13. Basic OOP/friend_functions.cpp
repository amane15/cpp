#include <iostream>

// A friend function is a function that can access the private members of a
// class as though it was a member of that class.

class Accumulator {
private:
  int m_value{0};

public:
  void add(int value) { m_value += value; }
  friend void reset(Accumulator &accumulator);
};

void reset(Accumulator &accumulator) { accumulator.m_value = 0; }

int main() {
  Accumulator acc;
  acc.add(3);
  reset(acc);

  return 0;
}
