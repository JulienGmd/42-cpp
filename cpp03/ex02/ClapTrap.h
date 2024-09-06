#pragma once

#include <string>

class ClapTrap
{
public:
    // Orthodox Canonical
    ClapTrap(const std::string &name);
    ClapTrap(const ClapTrap &other);
    ~ClapTrap();
    ClapTrap &operator=(const ClapTrap &other);

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    bool isAlive();
    bool hasEnergy();
    void printStats();

protected:
    std::string name;
    int health;
    int energy;
    int attackDamage;
};
