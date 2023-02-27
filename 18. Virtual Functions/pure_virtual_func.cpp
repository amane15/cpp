#include <iostream>
#include <string_view>

class Base {
   public:
    std::string_view sayHi() const { return "HI"; }
    virtual std::string_view getName() const { return "Base"; }
    virtual int getValue() const = 0;  // a pure virtual function
};

#include <string>
#include <string_view>

class Animal {
   protected:
    std::string m_name{};

    // We're making this constructor protected because
    // we don't want people creating Animal objects directly,
    // but we still want derived classes to be able to use it.
    Animal(std::string_view name)
        : m_name{name} {
    }

   public:
    std::string getName() const { return m_name; }
    virtual std::string_view speak() const = 0;

    virtual ~Animal() = default;
};

class Cat : public Animal {
   public:
    Cat(std::string_view name)
        : Animal{name} {
    }

    std::string_view speak() const override { return "Meow"; }
};

class Cow : public Animal {
   public:
    Cow(std::string_view name)
        : Animal{name} {
    }

    std::string_view speak() const override { return "Woof"; }
};

int main() {
    Cow cow{"Betsy"};
    std::cout << cow.getName() << " says " << cow.speak() << '\n';
}