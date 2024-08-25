#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "utils.h"

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

        } else if (option == "SEARCH")
        {
            phonebook.SearchContact();

        } else if (option == "EXIT")
            break;
    }

    return 0;
}
