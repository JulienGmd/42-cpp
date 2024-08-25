#include "Zombie.h"

int main()
{
    Zombie *a = newZombie("a");
    Zombie *b = newZombie("b");
    a->announce();
    b->announce();
    delete a;
    delete b;

    randomChump("c");
    randomChump("d");

    return 0;
}
