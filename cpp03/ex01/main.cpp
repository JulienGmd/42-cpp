#include "ScavTrap.h"

int main(void)
{
    ScavTrap scavtrap("scav");

    scavtrap.attack("Bandit");
    scavtrap.takeDamage(50);
    scavtrap.guardGate();

    return 0;
}
