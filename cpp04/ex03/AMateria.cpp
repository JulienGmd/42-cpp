#include "AMateria.h"
#include <iostream>

AMateria::AMateria()
{
	type = "default";
}

AMateria::AMateria(const std::string &type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	if (this == &other)
		return *this;
	type = other.type;
	return *this;
}

AMateria::~AMateria()
{
}

const std::string &AMateria::getType() const
{
	return type;
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	std::cout << "AMateria used" << std::endl;
}
