#include "Zombie.h"

int main(int ac, char **av)
{
    int N = 3;

    try
    {
        if (ac >= 2)
            N = std::stoi(av[1]);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Argument must be a number, using default value " << N << "\n";
    }

    Zombie *horde = zombieHorde(N, "horde");
    for (int i = 0; i < N; i++)
        horde[i].announce();
    delete[] horde;

    return 0;
}
