#include <iostream>

struct Employee {
  int id{};
  int age{};
  double wage{};
};

struct Rectangle {
  double width{};
  double height{};
};

struct Point3D {
  double x{0.0};
  double y{0.0};
  double z{0.0};
};

struct Foo {
  short a{};
  int b{};
  double c{};
};

Point3D getZeroPoint() {
  // Point3D temp{0.0, 0.0, 0.0};
  return Point3D{0.0, 0.0, 0.0};
}

void printEmployees(const Employee& employee) {
  std::cout << "ID " << employee.id << '\n';
  std::cout << "Age " << employee.age << '\n';
  std::cout << "Wage " << employee.wage << '\n';
}

int main() {
  Employee one = {1, 32, 54000.0};
  one = {1, 33, 60000};
  // Employee two(3, 54, 78000.0); // c++20
  Employee three{2, 65, 100000};
  Employee four{}; // value-initialize all members

  const Rectangle unit{1.0, 1.0};
  const Rectangle zero{};

  printEmployees(one);

  std::cout << "The size of Foo is: " << sizeof(Foo) << '\n';

  // Member selection for pointers to structs
  // (->) arrow operator
  Employee* ptr{&one};
  std::cout << ptr->id << '\n';

  return 0;
}
