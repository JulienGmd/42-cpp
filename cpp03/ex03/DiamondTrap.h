#pragma once

#include <string>
#include "ScavTrap.h"
#include "FragTrap.h"

class DiamondTrap : public FragTrap, public ScavTrap
{
public:
    DiamondTrap(const std::string &name);
    DiamondTrap(const DiamondTrap &other);
    ~DiamondTrap();

    DiamondTrap &operator=(const DiamondTrap &other);

    void attack(const std::string &target);

    void whoAmI();

private:
    std::string name;
};
