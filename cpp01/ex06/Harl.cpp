#include "Harl.h"
#include <iostream>

Harl::Harl()
{
    log_level = 0;
}

Harl::~Harl() {}

int Harl::get_log_level(const std::string &level)
{
    if (level == "DEBUG")
        return 0;
    else if (level == "INFO")
        return 1;
    else if (level == "WARNING")
        return 2;
    else if (level == "ERROR")
        return 3;
    else
        return -1;
}

void Harl::complain(std::string level)
{
    int log_level = get_log_level(level);
    if (log_level == -1)
    {
        std::cout << "Invalid level\n";
        return;
    }

    switch (log_level)
    {
    case 0:
        debug();
    case 1:
        info();
    case 2:
        warning();
    case 3:
        error();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}

void Harl::debug()
{
    std::cout << "DEBUG\n";
}

void Harl::info()
{
    std::cout << "INFO\n";
}

void Harl::warning()
{
    std::cout << "WARNING\n";
}

void Harl::error()
{
    std::cout << "ERROR\n";
}
