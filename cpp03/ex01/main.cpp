#include "ScavTrap.h"

int main(void)
{
    ScavTrap scavtrap("scav");

    scavtrap.attack("Bandit");
    scavtrap.takeDamage(50);
    scavtrap.beRepaired(50);

    scavtrap.takeDamage(100);
    scavtrap.attack("Bandit");
    scavtrap.beRepaired(10);

    scavtrap.guardGate();

    return 0;
}
