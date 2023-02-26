#include <ios>
#include <iostream>
#include <istream>
#include <limits>
#include <ostream>

class Fraction {
private:
  int m_numerator{};
  int m_denominator{};

public:
  Fraction(int numerator = 0, int denominator = 1)
      : m_numerator{numerator}, m_denominator{denominator} {}

  void print() {
    std::cout << m_numerator << '/' << m_denominator << '\n';
  }

  friend Fraction operator*(const Fraction& frac1, const Fraction& frac2);
  friend Fraction operator*(int value, const Fraction& frac);
  friend Fraction operator*(const Fraction& frac, int value);
  friend std::ostream& operator<<(std::ostream& out, const Fraction& frac);
  friend std::istream& operator>>(std::istream& in, Fraction& frac);
};

Fraction operator*(const Fraction& frac1, const Fraction& frac2) {
  return Fraction{frac1.m_numerator * frac2.m_numerator,
                  frac1.m_denominator * frac2.m_denominator};
}

Fraction operator*(int value, const Fraction& frac) {
  return Fraction{value * frac.m_numerator, frac.m_denominator};
}

Fraction operator*(const Fraction& frac, int value) {
  return Fraction{frac.m_numerator * value, frac.m_denominator};
}

std::ostream& operator<<(std::ostream& out, const Fraction& frac) {
  out << frac.m_numerator << '/' << frac.m_denominator;
  return out;
}

std::istream& operator>>(std::istream& in, Fraction& frac) {
  char fraction;
  in >> frac.m_numerator;
  // in >> fraction;
  in.ignore(std::numeric_limits<std::streamsize>::max(), '/');
  in >> frac.m_denominator;
  return in;
}

int main() {
  // Fraction f1{2, 5};
  // f1.print();
  //
  // Fraction f2{3, 8};
  // f2.print();
  //
  // Fraction f3{f1 * f2};
  // f3.print();
  //
  // Fraction f4{f1 * 2};
  // f4.print();
  //
  // Fraction f5{2 * f2};
  // f5.print();
  //
  // Fraction f6{Fraction{1, 2} * Fraction{2, 3} * Fraction{3, 4}};
  // f6.print();

  Fraction f1;
  std::cout << "Enter fraction 1: ";
  std::cin >> f1;

  Fraction f2;
  std::cout << "Enter fraction 2: ";
  std::cin >> f2;

  std::cout << f1 << " * " << f2 << " is " << f1 * f2 << '\n';

  return 0;
}
