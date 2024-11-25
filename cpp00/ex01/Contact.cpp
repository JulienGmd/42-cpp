#include "Contact.hpp"
#include "utils.h"
#include <iomanip>
#include <iostream>

void PrintColumn(const std::string &content);
std::string Truncate(const std::string &basicString, size_t length);

Contact::Contact() {}

Contact::~Contact() {}

void Contact::SetFirstName(const std::string &first_name)
{
    this->first_name = first_name;
}

void Contact::SetLastName(const std::string &last_name)
{
    this->last_name = last_name;
}

void Contact::SetNickname(const std::string &nickname)
{
    this->nickname = nickname;
}

void Contact::SetPhoneNumber(const std::string &phone_number)
{
    this->phone_number = phone_number;
}

void Contact::SetDarkestSecret(const std::string &darkest_secret)
{
    this->darkest_secret = darkest_secret;
}

std::string Contact::GetFirstName() const
{
    return first_name;
}

std::string Contact::GetLastName() const
{
    return last_name;
}

std::string Contact::GetNickname() const
{
    return nickname;
}

std::string Contact::GetPhoneNumber() const
{
    return phone_number;
}

std::string Contact::GetDarkestSecret() const
{
    return darkest_secret;
}

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
