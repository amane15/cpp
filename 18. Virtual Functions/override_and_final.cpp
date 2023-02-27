#include <iostream>
#include <string_view>

class A {
   public:
    virtual std::string_view getName1(int x) { return "A"; }
    virtual std::string_view getName2(int x) { return "A"; }
    virtual std::string_view getName3(int x) { return "A"; }
    virtual std::string_view getName() { return "A"; }
    // Covariant return types
    virtual A* getThis() {
        std::cout << "called A::getThis()\n";
        return this;
    }
};

class B : public A {
   public:
    std::string_view getName1(short int x) override { return "B"; }
    std::string_view getName2(int x) const override { return "B"; }
    std::string_view getName3(int x) override { return "B"; }
    std::string_view getName() override final { return "B"; }
    // Covariant return types
    B* getThis() override {
        std::cout << "called B::getThis()\n";
        return this;
    }
};

class C final : public B {
   public:
    // not allowed
    std::string_view getName() override { return "C"; }
}

// Cannot inherit from final class
class D : public C {
};

int main() {
    return 0;
}