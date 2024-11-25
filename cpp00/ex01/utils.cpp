#include "utils.h"
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>

namespace Utils
{
    std::string Itoa(int i)
    {
        std::stringstream ss;
        ss << i;
        return ss.str();
    }

    void Input(std::string &field, const std::string &prompt)
    {
        std::cout << BLUE << prompt << RESET;
        std::getline(std::cin, field); // using `getline` because `cin` stops at the first whitespace
        if (std::cin.eof())
            exit(1);
    }

    void Input(int &field, const std::string &prompt)
    {
        std::cout << BLUE << prompt << RESET;
        std::cin >> field;
        std::cin.ignore(); // ignore the newline character left in the buffer
        if (std::cin.fail())
        {
            std::cin.clear();
            field = -1;
        }
    }
}
