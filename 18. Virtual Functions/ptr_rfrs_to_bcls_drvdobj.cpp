#include <iostream>
#include <string_view>

class Base {
   protected:
    int m_value{};

   public:
    Base(int value)
        : m_value{value} {
    }

    std::string_view getName() const { return "Base"; }
    int getValue() const { return m_value; }
};

class Derived : public Base {
   public:
    Derived(int value)
        : Base{value} {
    }

    std::string_view getName() const { return "Derived"; }
    int getValueDoubled() const { return m_value * 2; }
};

#include <iostream>
#include <string>
#include <string_view>

class Animal {
   protected:
    std::string m_name;

    // We're making this constructor protected because
    // we don't want people creating Animal objects directly,
    // but we still want derived classes to be able to use it.
    Animal(std::string_view name)
        : m_name{name} {
    }

    // To prevent slicing (covered later)
    Animal(const Animal&) = default;
    Animal& operator=(const Animal&) = default;

   public:
    std::string_view getName() const { return m_name; }
    std::string_view speak() const { return "???"; }
};

class Cat : public Animal {
   public:
    Cat(std::string_view name)
        : Animal{name} {
    }

    std::string_view speak() const { return "Meow"; }
};

class Dog : public Animal {
   public:
    Dog(std::string_view name)
        : Animal{name} {
    }

    std::string_view speak() const { return "Woof"; }
};

int main() {
    Derived derived{5};
    std::cout << "derived is a " << derived.getName()
              << " and has value " << derived.getValue() << '\n';

    Derived rDerived{derived};
    std::cout << "rDerived is a " << rDerived.getName()
              << " and has value " << rDerived.getValue() << '\n';

    Derived* pDerived{&derived};
    std::cout << "pDerived is a " << pDerived->getName()
              << " and has value " << pDerived->getValue() << '\n';

    Base& rBase{derived};
    Base* pBase{&derived};

    std::cout << "rBase is a " << rBase.getName()
              << " and has value " << rBase.getValue() << '\n';

    std::cout << "pBase is a " << pBase->getName()
              << " and has value " << pBase->getValue() << '\n';

    const Cat cat{"Fred"};
    std::cout << "cat is named " << cat.getName() << ", and it says " << cat.speak() << '\n';

    const Dog dog{"Garbo"};
    std::cout << "dog is named " << dog.getName() << ", and it says " << dog.speak() << '\n';

    const Animal* pAnimal{&cat};
    std::cout << "pAnimal is named " << pAnimal->getName() << ", and it says " << pAnimal->speak() << '\n';

    pAnimal = &dog;
    std::cout << "pAnimal is named " << pAnimal->getName() << ", and it says " << pAnimal->speak() << '\n';

    return 0;
}