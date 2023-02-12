#include <iostream>
#include <iterator>

int main() {
  int prime[5]{2, 3, 5, 7, 11};
  std::cout << "The array has: " << std::size(prime) << " elements \n";

  constexpr int scores[]{84, 92, 76, 81, 56};
  constexpr int numOfStudents{static_cast<int>(std::size(scores))};

  int maxScore{0};

  for (int i{0}; i < numOfStudents; i++) {
    if (scores[i] > maxScore) {
      maxScore = scores[i];
    }
  }

  return 0;
}
