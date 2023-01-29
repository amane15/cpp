#include <cstdint>
#include <iostream>

void print(int x);
void quizQuestion1();

int main() {
  std::cout << "bool:\t\t" << sizeof(bool) << " bytes\n";
  std::cout << "char:\t\t" << sizeof(char) << " bytes\n";
  std::cout << "short:\t\t" << sizeof(short) << " bytes\n";
  std::cout << "int:\t\t" << sizeof(int) << " bytes\n";
  std::cout << "float:\t\t" << sizeof(float) << " bytes\n";
  std::cout << "wchar_t:\t\t" << sizeof(wchar_t) << " bytes\n";
  std::cout << "char16_t:\t\t" << sizeof(char16_t) << " bytes\n";
  std::cout << "long long:\t\t" << sizeof(long long) << " bytes\n";

  // short short_type;
  // int int_type;
  // long long_int;
  // long long ll_int;

  unsigned int x{3};
  unsigned int y{5};

  std::cout << x - y << "\n";
  std::int16_t i{5};

  double zero{0.0};

  double posinf{5.0 / zero};
  std::cout << posinf << "\n";

  double neginf{-5.0 / zero};
  std::cout << neginf << "\n";

  double nan{zero / zero};
  std::cout << nan << "\n";

  std::cout << "bool value " << true << "\n";

  // type conversion and static cast
  print(static_cast<int>(5.5)); // explicitly convert double value 5.5 to an int

  quizQuestion1();

  return 0;
}

void print(int x) { std::cout << x << '\n'; }

void quizQuestion1() {
  char c;
  std::cout << "Enter a single character: ";
  std::cin >> c;
  std::cout << "You entered " << c << ", which has ASCII code "
            << static_cast<int>(c) << '\n';
}
