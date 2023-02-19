#include <iostream>

// Access controls work on a per-class basis
// This means that when a function has access to the private members of
// a class, it can access the private members of any object of that
// class type that it can see.

class DateClass {
    int m_year{};
    int m_month{};
    int m_day{};

   public:
    void setDate(int day, int month, int year) {
        m_day = day;
        m_month = month;
        m_year = year;
    }

    void print() {
        std::cout << m_day << '/' << m_month << '/' << m_year;
    }

    void copyFrom(const DateClass& d) {
        m_day = d.m_day;
        m_month = d.m_month;
        m_year = d.m_year;
    }
};

int main() {
    DateClass date;
    date.setDate(1, 1, 2023);

    DateClass copy;
    copy.copyFrom(date);
    copy.print();
}