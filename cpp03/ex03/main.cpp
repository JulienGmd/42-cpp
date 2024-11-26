#include "DiamondTrap.h"

int main(void)
{
    DiamondTrap diamondTrap("diamond");
    diamondTrap.whoAmI();
    diamondTrap.attack("Bandit");

    DiamondTrap diamondTrap2(diamondTrap);
    diamondTrap2.whoAmI();
    diamondTrap2.attack("Bandit");

    DiamondTrap diamondTrap3("diamond 3");
    diamondTrap2 = diamondTrap3;
    diamondTrap2.whoAmI();
    diamondTrap2.attack("Bandit");

    return 0;
}
