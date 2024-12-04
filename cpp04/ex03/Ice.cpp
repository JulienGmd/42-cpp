#include "Ice.h"
#include "Character.h"
#include <iostream>

Ice::Ice() : AMateria()
{
	type = "ice";
}

Ice::Ice(const Ice &other) : AMateria(other)
{
	*this = other;
}

Ice &Ice::operator=(const Ice &other)
{
	if (this == &other)
		return *this;
	AMateria::operator=(other);
	return *this;
}

Ice::~Ice()
{
}

AMateria *Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
