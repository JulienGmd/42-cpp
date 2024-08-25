#include <iostream>
#include "PhoneBook.hpp"
#include "utils.h"

PhoneBook::PhoneBook()
{
    last_index = -1;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::AddContact(const Contact &contact)
{
    if (!contact.IsComplete())
    {
        std::cout << "Contact is not complete.\n";
        return;
    }

    last_index = (last_index + 1) % 8;
    contacts[last_index] = contact;
    std::cout << "Contact added.\n";
}

void PhoneBook::SearchContact()
{
    if (IsEmpty())
    {
        std::cout << "Phone book is empty.\n";
        return;
    }

    for (int i = 0; i < 8 && contacts[i].IsComplete(); i++)
        contacts[i].PrintLine(i);
    int index;
    Utils::Input(index, "Select index: ");
    if (index >= 0 && index < 8 && contacts[index].IsComplete())
        contacts[index].Print();
    else
        std::cout << "Invalid index.\n";
}

bool PhoneBook::IsEmpty()
{
    return !contacts[0].IsComplete();
}
