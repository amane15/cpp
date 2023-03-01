#include <cmath>
#include <iostream>

class Point2d {
private:
  double m_first{};
  double m_second{};

public:
  Point2d(double first = 0, double second = 0)
      : m_first{first}, m_second{second} {}

  void print() {
    std::cout << "Point2d"
              << "(" << m_first << ", " << m_second << ")" << '\n';
  }

  friend double distanceFrom(const Point2d& first, const Point2d& second);
};

double distanceFrom(const Point2d& first, const Point2d& second) {
  return std::sqrt(
      (first.m_first - second.m_first) * (first.m_first - second.m_first) +
      (first.m_second - second.m_second) * (first.m_second - second.m_second));
}

int main() {
  Point2d first{};
  Point2d second{3.0, 4.0};
  first.print();
  second.print();

  std::cout << "Distance between two points: " << distanceFrom(first, second)
            << '\n';

  return 0;
}
