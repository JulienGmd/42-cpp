#pragma once

#include <string>

class Contact
{
public:
    Contact();
    ~Contact();

private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
    void SetFirstName(const std::string &first_name);
    void SetLastName(const std::string &last_name);
    void SetNickname(const std::string &nickname);
    void SetPhoneNumber(const std::string &phone_number);
    void SetDarkestSecret(const std::string &darkest_secret);

    bool IsComplete() const;
    void Print() const;
    void PrintLine(int index) const;
};
