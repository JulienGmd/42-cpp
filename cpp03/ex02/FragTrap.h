#pragma once

#include <string>
#include "ClapTrap.h"

class FragTrap : public ClapTrap
{
public:
    FragTrap(const std::string &name);
    ~FragTrap();

    void highFivesGuys();

private:
};
