#include "Zombie.h"
#include <cstdlib>

Zombie *zombieHorde(int N, std::string name)
{
    if (N <= 0)
    {
        std::cerr << "N must be positive" << std::endl;
        exit(1);
    }
    Zombie *zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
        zombies[i].setName(name);
    return zombies;
}
