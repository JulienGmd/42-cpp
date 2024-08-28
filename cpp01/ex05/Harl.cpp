#include <iostream>
#include "Harl.h"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::complain(std::string level)
{
    void (Harl::* complaints[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"debug", "info", "warning", "error"};

    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            (this->*complaints[i])();
            return;
        }
    }

    std::cout << "Invalid level\n";
}

void Harl::debug()
{
    std::cout << "Debug\n";
}

void Harl::info()
{
    std::cout << "Info\n";
}

void Harl::warning()
{
    std::cout << "Warning\n";
}

void Harl::error()
{
    std::cout << "Error\n";
}
