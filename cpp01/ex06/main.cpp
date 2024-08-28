
#include <iostream>
#include "Harl.h"

int main(int ac, char **av)
{
    Harl harl;

    if (ac == 2)
    {
        int log_level = Harl::get_log_level(av[1]);
        if (log_level == -1)
        {
            std::cout << "Invalid 1st arg\n";
            return 1;
        }
        harl.log_level = log_level;
    }

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("");

    return 0;
}
