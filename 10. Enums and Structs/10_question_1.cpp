#include <iostream>

enum class MonsterType { ogre, dragon, orc, giant, spider, slime };

struct Monster {
  std::string name{};
  MonsterType monsterType{};
};

int main() {
  int i;
  return 0;
}
