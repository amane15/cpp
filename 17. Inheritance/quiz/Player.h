#ifndef PLAYER_H
#define PLAYER_H

#include "Creature.h"

class Player : public Creature {
   private:
    int m_level{1};

   public:
    Player(const std::string& name)
        : Creature{name, '@', 10, 1, 0} {}

   public:
    void levelUp() {
        ++m_level;
        ++m_damagePerAttack;
    }
    int getLevel() const { return m_level; }
    bool hasWon() const { return m_level >= 20; }
};

#endif