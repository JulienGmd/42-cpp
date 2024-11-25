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
            std::string input;

            Utils::Input(input, "First name: ");
            contact.SetFirstName(input);
            Utils::Input(input, "Last name: ");
            contact.SetLastName(input);
            Utils::Input(input, "Nickname: ");
            contact.SetNickname(input);
            Utils::Input(input, "Phone number: ");
            contact.SetPhoneNumber(input);
            Utils::Input(input, "Darkest secret: ");
            contact.SetDarkestSecret(input);

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
