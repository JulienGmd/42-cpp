#include <iostream>
#include "FragTrap.h"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    health = 100;
    energy = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " created";
    printStats();
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " destroyed" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << name << " requests a high five" << std::endl;
}
