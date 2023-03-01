#include <iostream>

class Cents {
private:
  int m_cents;

public:
  Cents(int cents = 0) : m_cents{cents} {}

  // Overloaded int casts
  operator int() const {
    return m_cents;
  }

  int getCents() const {
    return m_cents;
  }

  void setSents(int cents) {
    m_cents = cents;
  }
};

int main() {}
