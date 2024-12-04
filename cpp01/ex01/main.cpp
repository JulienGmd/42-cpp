#include "Zombie.h"
#include <cstdlib>

int main(int ac, char **av)
{
    int N = 3;

    if (ac >= 2)
        N = std::atoi(av[1]);

    Zombie *horde = zombieHorde(N, "horde");
    for (int i = 0; i < N; i++)
        horde[i].announce();
    delete[] horde;

    return 0;
}
