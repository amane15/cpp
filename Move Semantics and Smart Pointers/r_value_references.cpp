#include <iostream>

class Fraction {
   private:
    int m_numerator;
    int m_denominator;

   public:
    Fraction(int numerator, int denominator)
        : m_numerator{numerator}, m_denominator{denominator} {}

    friend std::ostream& operator<<(std::ostream& out, const Fraction& frac) {
        out << frac.m_numerator << '/' << frac.m_denominator;
        return out;
    }
};

void fun(const int& lref) {  // l-value arguments will select this function
    std::cout << "l-value reference to const: " << lref << '\n';
}

void fun(int&& rref) {  // r-value argumenst will select this function
    std::cout << "r-value references: " << rref << '\n';
}

int main() {
    auto&& rref{Fraction{3, 5}};  // r-value reference to temp fraction

    // f1 of operator<< binds to the temporary, no copies are created.
    std::cout << rref << '\n';

    /*
     * As an anonymous object, Fraction(3, 5) would normally go out of
     * scope at the end of the expression in which it is defined.
     * However, since we’re initializing an r-value reference with it,
     * its duration is extended until the end of the block. We can then
     * use that r-value reference to print the Fraction’s value.
     */

    int x{5};
    fun(x);
    fun(10);

    return 0;
}  // rref (and the temporary Fraction) goes out of scope here