#pragma once

#include "FragTrap.h"
#include "ScavTrap.h"
#include <string>

class DiamondTrap : public FragTrap, public ScavTrap
{
public:
    DiamondTrap();
    DiamondTrap(const std::string &name);
    DiamondTrap(const DiamondTrap &other);
    ~DiamondTrap();
    DiamondTrap &operator=(const DiamondTrap &other);

    void attack(const std::string &target);

    void whoAmI();

private:
    std::string name;
};
