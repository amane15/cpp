#include <iostream>
#include <vector>

void countDown(int count) {
  std::cout << "push " << count << '\n';
  if (count > 1) {
    countDown(count - 1);
  }
}

int fibonacci(int count) {
  static std::vector results{0, 1};

  if (count < static_cast<int>(std::size(results))) {
    return results[count];
  }

  results.push_back(fibonacci(count - 1) + fibonacci(count - 2));
  return results[count];
}

int main() {
  countDown(5);
  return 0;
}