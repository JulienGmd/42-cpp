#pragma once

#include <string>
#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap(const std::string &name);
    ScavTrap(const ScavTrap &other);
    ~ScavTrap();
    ScavTrap &operator=(const ScavTrap &other);

    void attack(const std::string &target);

    void guardGate();

private:
};
