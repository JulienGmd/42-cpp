#include <iostream>
#include "Harl.h"

Harl::Harl()
{
    log_level = 0;
}

Harl::~Harl() {}

void Harl::complain(std::string level)
{
    void (Harl::* complaints[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int log_level = get_log_level(level);
    if (log_level == -1)
    {
        std::cout << "Invalid level\n";
        return;
    }
    (this->*complaints[log_level])();
}

void Harl::debug()
{
    switch (log_level)
    {
        case 0:
            std::cout << "DEBUG\n";
            break;
    }
}

void Harl::info()
{
    switch (log_level)
    {
        case 0:
        case 1:
            std::cout << "INFO\n";
            break;
    }
}

void Harl::warning()
{
    switch (log_level)
    {
        case 0:
        case 1:
        case 2:
            std::cout << "WARNING\n";
            break;
    }

}

void Harl::error()
{
    switch (log_level)
    {
        case 0:
        case 1:
        case 2:
        case 3:
            std::cout << "ERROR\n";
            break;
    }
}

int Harl::get_log_level(const std::string &level)
{
    if (level == "DEBUG") return 0;
    else if (level == "INFO") return 1;
    else if (level == "WARNING") return 2;
    else if (level == "ERROR") return 3;
    else return -1;
}
