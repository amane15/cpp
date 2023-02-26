#include <iostream>
#include <ostream>

class Point {
private:
  double m_x{};
  double m_y{};
  double m_z{};

public:
  Point(double x = 0.0, double y = 0.0, double z = 0.0)
      : m_x{x}, m_y{y}, m_z{z} {}

  friend std::ostream& operator<<(std::ostream& out, const Point& point);
  friend std::istream& operator>>(std::istream& in, Point& point);

  double getX() const {
    return m_x;
  }

  double getY() const {
    return m_y;
  }

  double getZ() const {
    return m_z;
  }

  Point operator-() const;
  bool operator!() const;
  Point operator+() const;
};

std::ostream& operator<<(std::ostream& out, const Point& point) {
  out << "Point(" << point.m_x << ", " << point.m_y << ", " << point.m_z << ")";

  return out;
}

std::istream& operator>>(std::istream& in, Point& point) {
  // note that parameter point must be non-const so we can modify the class
  // members with the input values
  in >> point.m_x;
  in >> point.m_y;
  in >> point.m_z;

  return in;
}

Point Point::operator-() const {
  return {-m_x, -m_y, -m_z};
}

// Return true if the point is set at the origin, false otherwise
bool Point::operator!() const {
  return (m_x == 0.0 && m_y == 0.0 && m_z == 0.0);
}

Point Point::operator+() const {
  return {m_x, m_y, m_z};
}

int main() {
  Point point1{2.0, 3.5, 4.0};
  Point point2{6.0, 7.5, 8.0};
  //
  // std::cout << point1 << ' ' << point2 << '\n';
  //
  // Point point;
  // std::cout << "Enter a point: ";
  // std::cin >> point;
  //
  // std::cout << "You entered: " << point << '\n';
  Point point{}; // use default constructor to set to (0.0, 0.0, 0.0)

  if (!point)
    std::cout << "point is set at the origin.\n";
  else
    std::cout << "point is not set at the origin.\n";

  return 0;
}
