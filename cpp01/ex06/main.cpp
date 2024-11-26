#include "Harl.h"
#include <iostream>

int main(int ac, char **av)
{
    Harl harl;

    if (ac == 2)
        harl.log_level = Harl::get_log_level(av[1]);

    harl.complain("DEBUG");
    std::cout << std::endl;
    harl.complain("INFO");
    std::cout << std::endl;
    harl.complain("WARNING");
    std::cout << std::endl;
    harl.complain("ERROR");
    std::cout << std::endl;
    harl.complain("");

    return 0;
}
