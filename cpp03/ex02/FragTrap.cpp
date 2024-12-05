#include "FragTrap.h"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
    health = 100;
    energy = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " created";
    printStats();
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    health = 100;
    energy = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " created";
    printStats();
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    *this = other;
    std::cout << "FragTrap " << name << " created (copy)";
    printStats();
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " destroyed" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this == &other)
        return *this;
    ClapTrap::operator=(other);
    return *this;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << name << " requests a high five" << std::endl;
}
