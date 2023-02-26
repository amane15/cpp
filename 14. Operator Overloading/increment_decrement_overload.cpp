#include <iostream>
#include <ostream>

class Digit {
private:
  int m_digit{};

public:
  Digit(int digit = 0) : m_digit{digit} {}

  Digit& operator++(); // prefix
  Digit& operator--(); // prefix

  Digit operator++(int);
  Digit operator--(int);

  friend std::ostream& operator<<(std::ostream& out, const Digit& digit);
};

Digit& Digit::operator++() {
  // If our number is already at 9, wrap around to 0
  if (m_digit == 9) {
    m_digit = 0;
  } else {
    ++m_digit;
  }

  return *this;
}

Digit& Digit::operator--() {
  if (m_digit == 0) {
    m_digit = 9;
  } else {
    --m_digit;
  }

  return *this;
}

Digit Digit::operator++(int) {
  Digit temp{*this};

  ++(*this);

  return temp;
}

Digit Digit::operator--(int) {
  Digit temp{*this};

  --(*this);

  return temp;
}

std::ostream& operator<<(std::ostream& out, const Digit& digit) {
  out << digit.m_digit << '\n';
  return out;
}

int main() {
  Digit digit{8};

  std::cout << digit;
  std::cout << ++digit;
  std::cout << ++digit;
  std::cout << digit;
  std::cout << --digit;

  return 0;
}
