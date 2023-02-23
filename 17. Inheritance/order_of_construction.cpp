#include <iostream>

class Base {
   public:
    int m_id{};

    Base(int id = 0) : m_id{id} {}
    int getId() const { return m_id; }
};

class Derived : public Base {
   public:
    double m_cost{};

    Derived(double cost = 0.0) : m_cost{cost} {}
    double getCost() const { return m_cost; }
};