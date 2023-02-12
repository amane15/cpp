#include <iostream>
#include <vector>

void printLength(const std::vector<int>& vec) {
  std::cout << "The length is: " << vec.size() << '\n';
}

int main() {
  std::vector<int> vec1;
  std::vector<int> vec2 = {1, 2, 3, 4, 5};
  std::vector vec3{1, 2, 3, 4, 5, 6};
  printLength(vec3);
  vec3.resize(10);
  printLength(vec3);

  return 0;
}
