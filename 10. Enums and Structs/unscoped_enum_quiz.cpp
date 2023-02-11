namespace monster {
enum MonsterRaces {
  orcs,
  goblins,
  troll,
  ogres,
  skeleton,
};
}

int main() {
  monster::MonsterRaces monster{monster::troll};
  return 0;
}
