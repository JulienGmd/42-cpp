#include "Contact.hpp"
#include "utils.h"
#include <iomanip>
#include <iostream>

void PrintColumn(const std::string &content);
std::string Truncate(const std::string &basicString, size_t length);

Contact::Contact() {}

Contact::~Contact() {}

bool Contact::IsComplete() const
{
    return !first_name.empty() &&
           !last_name.empty() &&
           !nickname.empty() &&
           !phone_number.empty() &&
           !darkest_secret.empty();
}

void Contact::Print() const
{
    std::cout << "First name: " << first_name << "\n";
    std::cout << "Last name: " << last_name << "\n";
    std::cout << "Nickname: " << nickname << "\n";
    std::cout << "Phone number: " << phone_number << "\n";
    std::cout << "Darkest secret: " << darkest_secret << "\n";
}

void Contact::PrintLine(int index) const
{
    PrintColumn(Utils::Itoa(index));
    PrintColumn(first_name);
    PrintColumn(last_name);
    PrintColumn(nickname);
    std::cout << "\n";
}

void PrintColumn(const std::string &content)
{
    std::cout << std::setw(10) << std::right << Truncate(content, 10) << "|";
}

std::string Truncate(const std::string &basicString, size_t length)
{
    if (basicString.length() > length)
        return basicString.substr(0, length - 1) + ".";
    return basicString;
}
