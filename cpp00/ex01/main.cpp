#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "utils.h"
#include <iostream>

int main()
{
    PhoneBook phonebook;

    while (true)
    {
        std::string option;
        Utils::Input(option, "ADD | SEARCH | EXIT: ");

        if (option == "ADD")
        {
            Contact contact;
            Utils::Input(contact.first_name, "First name: ");
            Utils::Input(contact.last_name, "Last name: ");
            Utils::Input(contact.nickname, "Nickname: ");
            Utils::Input(contact.phone_number, "Phone number: ");
            Utils::Input(contact.darkest_secret, "Darkest secret: ");
            phonebook.AddContact(contact);
        }
        else if (option == "SEARCH")
            phonebook.SearchContact();
        else if (option == "EXIT")
            break;
        else
            std::cout << "Invalid option\n";
    }

    return 0;
}
