#include <Date.h>

#include <iostream>

void printDate(const Date& date) {
    std::cout << date.getDay() << '/' << date.getMonth() << '/' << date.getYear() << '\n';
}

int main() {
}