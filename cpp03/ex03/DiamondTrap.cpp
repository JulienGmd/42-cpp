#include "DiamondTrap.h"
#include <iostream>

DiamondTrap::DiamondTrap(const std::string &name)
    : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
    this->name = name;
    health = FragTrap::health;
    energy = ScavTrap::energy;
    attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap " << name << " created";
    ScavTrap::printStats();
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
    : ClapTrap(other), FragTrap(other), ScavTrap(other)
{
    *this = other;
    std::cout << "DiamondTrap " << name << " created (copy)";
    ScavTrap::printStats();
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << name << " destroyed" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    if (this == &other)
        return *this;
    name = other.name;
    ClapTrap::operator=(other);
    return *this;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    name = other.name;
    ClapTrap::operator=(other);
    return *this;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am " << name << " and my ClapTrap name is "
              << ClapTrap::name << std::endl;
}
