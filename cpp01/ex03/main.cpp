#include "HumanA.h"
#include "HumanB.h"
#include "Weapon.h"

int main()
{
    {
        Weapon club = Weapon("A");
        HumanA bob("HumanA", club);
        bob.attack();
        club.setType("B");
        bob.attack();
    }
    {
        Weapon club = Weapon("A");
        HumanB jim("HumanB");
        jim.attack();
        jim.setWeapon(club);
        jim.attack();
        club.setType("B");
        jim.attack();
    }
    return 0;
}
