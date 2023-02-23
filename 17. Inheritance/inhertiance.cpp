#include <iostream>
#include <string>

class Person {
   public:
    std::string m_name{};
    int m_age{};

    Person(const std::string& name = "", int age = 0)
        : m_name{name}, m_age{age} {}

    const std::string& getName() const { return m_name; }
    int getAge() const { return m_age; }
};

// Public inheritance
class BaseballPlayer : public Person {
   public:
    double m_battingAverage{};
    int m_homeRuns{};

    BaseballPlayer(double battingAverage = 0.0, int homeRuns = 0)
        : m_battingAverage{battingAverage}, m_homeRuns{homeRuns} {}
};

class Employee : public Person {
   public:
    double m_hourlySalary{};
    long m_employeeID{};

    Employee(double hourlySalary = 0.0, long employeeID = 0)
        : m_hourlySalary{hourlySalary}, m_employeeID{employeeID} {}

    void printNameAndSalary() const {
        std::cout << m_hourlySalary << '\n';
    }
};

class Supervisor : public Employee {
   public:
    long m_overseesIDs[5]{};
};

int main() {
    BaseballPlayer joe{};
    joe.m_name = "Joe";
    std::cout << joe.getName() << '\n';

    return 0;
}