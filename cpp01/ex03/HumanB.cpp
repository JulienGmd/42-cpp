#include <iostream>
#include "HumanB.h"

HumanB::HumanB(const std::string &name)
{
    this->name = name;
}

HumanB::~HumanB() {}

void HumanB::attack() const
{
    if (!weapon)
        std::cout << name << " has no weapon to attack with" << std::endl;
    else
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}
