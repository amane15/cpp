#include <iostream>
#include <string>

double calculateHeight(double towerHeight, int second) {
  constexpr double gravity{9.8};
  const double distanceFallen{(gravity * (second * second)) / 2.0};
  const double currentHeight{towerHeight - distanceFallen};

  return currentHeight;
}

int main() {
  double towerHeight;
  std::cout << "Enter tower height: ";
  std::cin >> towerHeight;

  int second;

  constexpr double gravity{9.8};

  while (towerHeight > 0) {
    double height = calculateHeight(towerHeight, second);
    std::cout << "At " << second
              << " seconds, the ball is at height: " << height << '\n';

    towerHeight = height;
    second++;
  }

  return 0;
}
