#include "ScavTrap.h"

int main(void)
{
    ScavTrap claptrap("scav");

    claptrap.attack("Bandit");
    claptrap.takeDamage(50);
    claptrap.beRepaired(50);

    claptrap.takeDamage(100);
    claptrap.attack("Bandit");
    claptrap.beRepaired(10);

    return 0;
}
