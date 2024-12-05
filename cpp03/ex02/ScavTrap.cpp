#include "ScavTrap.h"
#include <iostream>

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    health = 100;
    energy = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << name << " created";
    printStats();
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    *this = other;
    std::cout << "ScavTrap " << name << " created (copy)";
    printStats();
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " destroyed" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if (this == &other)
        return *this;
    ClapTrap::operator=(other);
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " has entered in Gate keeper mode"
              << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    ClapTrap::attack(target);

    if (health <= 0 || energy <= 0)
        return;

    std::cout << "ScavTrap " << name << " attacks " << target << ", causing "
              << attackDamage << " damage!!!";
    printStats();
}
