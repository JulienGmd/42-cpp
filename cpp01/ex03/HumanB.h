#pragma once

#include <string>
#include "Weapon.h"

class HumanB
{
public:
    HumanB(const std::string &name);
    ~HumanB();

    void attack() const;
    void setWeapon(Weapon &weapon);

private:
    std::string name;
    Weapon *weapon;
};
