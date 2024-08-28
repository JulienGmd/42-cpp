#pragma once

#include <string>

class Harl
{
public:
    Harl();
    ~Harl();

    int log_level;

    static int get_log_level(const std::string &level);
    void complain(std::string level);

private:
    void debug();
    void info();
    void warning();
    void error();
};
