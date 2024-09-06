#pragma once

#include <string>
#include "ClapTrap.h"

class FragTrap : public ClapTrap
{
public:
    FragTrap(const std::string &name);
    FragTrap(const FragTrap &other);
    ~FragTrap();

    void highFivesGuys();

private:
};
