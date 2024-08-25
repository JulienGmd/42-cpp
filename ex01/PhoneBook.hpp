#pragma once

#include "Contact.hpp"

class PhoneBook
{
public:
    PhoneBook();
    ~PhoneBook();

    void AddContact(const Contact &contact);
    void SearchContact();
    bool IsEmpty();

private:
    Contact contacts[8];
    int last_index;
};
