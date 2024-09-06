#include "ClapTrap.h"

int main(void)
{
    ClapTrap claptrap("Claptrap");

    claptrap.attack("Bandit");
    claptrap.takeDamage(5);
    claptrap.beRepaired(5);

    claptrap.takeDamage(10);
    claptrap.attack("Bandit");
    claptrap.beRepaired(10);

    return 0;
}
