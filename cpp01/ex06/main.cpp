
#include <iostream>
#include "Harl.h"

int main(int ac, char **av)
{
    Harl harl;

    if (ac == 2)
        harl.log_level = Harl::get_log_level(av[1]);

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("");

    return 0;
}
