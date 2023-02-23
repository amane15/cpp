#ifndef CREATURE_H
#define CREATURE_H

#include <string>

class Creature {
   protected:
    std::string m_name{};
    char m_symbol{};
    int m_health{};
    int m_damagePerAttack{};
    int m_gold{};

   public:
    Creature(const std::string& name, char symbol, int health, int damagePerAttack, int gold)
        : m_name{name},
          m_symbol{symbol},
          m_health{health},
          m_damagePerAttack{damagePerAttack},
          m_gold{gold} {
    }

    const std::string& getName() const { return m_name; }
    int getHealth() const { return m_health; }
    char getSymbol() const { return m_symbol; }
    int getDamagePerAttack() const { return m_damagePerAttack; }
    int getGold() const { return m_gold; }

    void reduceHealth(int health) { m_health -= health; }

    bool isDead() const { return m_health <= 0; }

    void addGold(int gold) { m_gold += gold; }
};

#endif