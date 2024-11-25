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

    std::string GetFirstName() const;
    std::string GetLastName() const;
    std::string GetNickname() const;
    std::string GetPhoneNumber() const;
    std::string GetDarkestSecret() const;

    bool IsComplete() const;
    void Print() const;
    void PrintLine(int index) const;
};
