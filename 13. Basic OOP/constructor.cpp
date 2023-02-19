#include <cassert>
#include <iostream>

class Fraction {
   private:
    int m_numberator{};
    int m_denominator{};

   public:
    // Default Constructor
    // Fraction() {
    //     m_numberator = 0;
    //     m_denominator = 1;
    // }

    Fraction() = default;

    Fraction(int numerator = 0, int denominator = 1) {
        assert(denominator != 0);
        m_numberator = numerator;
        m_denominator = denominator;
    }

    int getNumerator() {
        return m_numberator;
    }

    int getDenominator() {
        return m_denominator;
    }

    double getValue() {
        return static_cast<double>(m_numberator) / m_denominator;
    }
};

int main() {
    Fraction frac1{};       // Value initialization
    Fraction frac3;         // default initialization
    Fraction frac3{5, 3};   // List initialization
    Fraction frac4(10, 4);  // direct initialization
    // Copy initialization
    Fraction six = Fraction{6};
    Fraction seven = 7;  // will invoke Fraction(7, 1) constructor
}