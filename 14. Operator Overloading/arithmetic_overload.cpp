#include <iostream>

class Cents {
private:
  int m_cents{};

public:
  Cents(int cents) : m_cents{cents} {}
  int getCents() const {
    return m_cents;
  }
  // + operator overload
  friend Cents operator+(const Cents& cent1, const Cents& cent2);
  friend Cents operator-(const Cents& cent1, const Cents& cent2);
  friend Cents operator+(int value, const Cents& cent);
  friend Cents operator+(const Cents& cent, int value);

  Cents operator-() const;

  friend bool operator==(const Cents& cent1, const Cents& cent2);
  friend bool operator!=(const Cents& cent1, const Cents& cent2);

  friend bool operator<(const Cents& cent1, const Cents& cent2);
  friend bool operator>(const Cents& cent1, const Cents& cent2);

  friend bool operator<=(const Cents& cent1, const Cents& cent2);
  friend bool operator>=(const Cents& cent1, const Cents& cent2);
};

Cents Cents::operator-() const {
  // since return type is a Cents, this does an implicit conversion from int to
  // Cents using the Cents(int) constructor
  return -m_cents;
}

Cents operator+(const Cents& cent1, const Cents& cent2) {
  return cent1.m_cents + cent2.m_cents;
}

Cents operator-(const Cents& cent1, const Cents& cent2) {
  return cent1.m_cents - cent2.m_cents;
}

Cents operator+(int value, const Cents& cent) {
  return value + cent.m_cents;
}

Cents operator+(const Cents& cent, int value) {
  return cent.m_cents + value;
}

bool operator==(const Cents& cent1, const Cents& cent2) {
  return cent1.m_cents == cent2.m_cents;
}

bool operator!=(const Cents& cent1, const Cents& cent2) {
  return cent1.m_cents != cent2.m_cents;
}

bool operator<(const Cents& cent1, const Cents& cent2) {
  return cent1.m_cents < cent2.m_cents;
}

bool operator>(const Cents& cent1, const Cents& cent2) {
  return cent1.m_cents > cent2.m_cents;
}

bool operator<=(const Cents& cent1, const Cents& cent2) {
  return cent1.m_cents <= cent2.m_cents;
}

bool operator>=(const Cents& cent1, const Cents& cent2) {
  return cent1.m_cents >= cent2.m_cents;
}

int main() {
  // Cents cent1{5};
  // Cents cent2{3};
  // Cents centSum{cent1 + cent2};
  // Cents centSub{cent1 - cent2};
  //
  // std::cout << centSum.getCents() << '\n';
  // std::cout << centSub.getCents() << '\n';
  const Cents nickle{5};
  std::cout << "A nickle of debt is worth " << (-nickle).getCents()
            << " cents\n";
  return 0;
}
