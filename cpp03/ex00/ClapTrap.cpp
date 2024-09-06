#include <iostream>
#include "ClapTrap.h"

ClapTrap::ClapTrap(const std::string &name)
{
    this->name = name;
    health = 10;
    energy = 10;
    attack_damage = 0;
    std::cout << name << " created"
              << " (health: " << health << ", energy: " << energy
              << ", attack_damage: " << attack_damage << ")"
              << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    *this = other;
    std::cout << name << " created (copy)"
              << " (health: " << health << ", energy: " << energy
              << ", attack_damage: " << attack_damage << ")"
              << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destroyed" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    name = other.name;
    health = other.health;
    energy = other.energy;
    attack_damage = other.attack_damage;
    return *this;
}

void ClapTrap::attack(const std::string &target)
{
    if (!isAlive() || !hasEnergy())
        return;
    energy--;
    std::cout << name << " attacks " << target << ", causing " << attack_damage
              << " damage!"
              << " (Energy: " << energy << ")" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    health -= amount;
    std::cout << name << " takes " << amount << " damage!"
              << " (Health: " << health << ")" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!isAlive() || !hasEnergy())
        return;
    energy--;
    health += amount;
    std::cout << name << " repaired by " << amount << "points!"
              << " (Health: " << health << ", Energy: " << energy << ")"
              << std::endl;
}

bool ClapTrap::isAlive()
{
    if (health <= 0)
        std::cout << name << " is dead!" << std::endl;
    return health > 0;
}

bool ClapTrap::hasEnergy()
{
    if (energy <= 0)
        std::cout << name << " is out of energy!" << std::endl;
    return energy > 0;
}
