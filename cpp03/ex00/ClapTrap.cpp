#include <iostream>
#include "ClapTrap.h"

ClapTrap::ClapTrap(const std::string &name)
{
    this->name = name;
    health = 10;
    energy = 10;
    attackDamage = 0;
    std::cout << "ClapTrap " << name << " created";
    printStats();
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    *this = other;
    std::cout << "ClapTrap " << name << " created (copy)";
    printStats();
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " destroyed" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    name = other.name;
    health = other.health;
    energy = other.energy;
    attackDamage = other.attackDamage;
    return *this;
}

void ClapTrap::attack(const std::string &target)
{
    if (!isAlive() || !hasEnergy())
        return;
    energy--;
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing "
              << attackDamage
              << " damage!";
    printStats();
}

void ClapTrap::takeDamage(unsigned int amount)
{
    health -= amount;
    std::cout << "ClapTrap " << name << " takes " << amount << " damage!";
    printStats();
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!isAlive() || !hasEnergy())
        return;
    energy--;
    health += amount;
    std::cout << "ClapTrap " << name << " repaired by " << amount << "points!";
    printStats();
}

bool ClapTrap::isAlive()
{
    if (health <= 0)
        std::cout << "ClapTrap " << name << " is dead!" << std::endl;
    return health > 0;
}

bool ClapTrap::hasEnergy()
{
    if (energy <= 0)
        std::cout << "ClapTrap " << name << " is out of energy!" << std::endl;
    return energy > 0;
}

void ClapTrap::printStats()
{
    std::cout << " ("
              << "\033[0;31m" << "health: " << health
              << "\033[0;33m" << " energy: " << energy
              << "\033[0;35m" << " attack_damage: " << attackDamage
              << "\033[0m" << ")" << std::endl;
}
