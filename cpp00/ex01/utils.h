#pragma once

#include <string>

#define BLUE    "\033[1m\033[34m"
#define RESET   "\033[0m"

namespace Utils
{
    std::string Itoa(int i);
    void Input(std::string &field, const std::string &prompt);
    void Input(int &field, const std::string &prompt);
}
