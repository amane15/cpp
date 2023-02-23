#include <iostream>

class Base {
   protected:
    int m_value{};
    void printValue() const {
        std::cout << m_value;
    }

   public:
    int m_public{};
    Base(int value)
        : m_value{value} {
    }

    void identify() const { std::cout << "I am a Base\n"; }
    int getValue() const { return m_value; }

    friend std::ostream& operator<<(std::ostream& out, const Base& b) {
        out << "In Base\n";
        out << b.m_value << '\n';
        return out;
    }
};

class Derived : public Base {
    // hiding functionality
   private:
    using Base::m_public;

   public:
    Derived(int value)
        : Base{value} {
    }

    void identify() const {
        Base::identify();
        std::cout << "I am derived\n";
    }

    friend std::ostream& operator<<(std::ostream& out, const Derived& d) {
        out << "In Derived\n";
        // static_cast Derived to a Base object, so we call the right version of operator<<
        out << static_cast<const Base&>(d);
        return out;
    }

    // changing access specifier
    using Base::printValue;
    int getValue() const = delete;  // mark this function inaccessible
};
int main() {
    Base base{5};
    base.identify();

    Derived derived{7};
    derived.identify();

    return 0;
}