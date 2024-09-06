#pragma once

#include <string>
#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap(const std::string &name);
    ~ScavTrap();

    void guardGate();

private:
};
