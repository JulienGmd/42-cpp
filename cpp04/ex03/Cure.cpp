#include "Cure.h"
#include "Character.h"
#include <iostream>

Cure::Cure() : AMateria()
{
	type = "cure";
}

Cure::Cure(const Cure &other) : AMateria(other)
{
	*this = other;
}

Cure &Cure::operator=(const Cure &other)
{
	if (this == &other)
		return *this;
	AMateria::operator=(other);
	return *this;
}

Cure::~Cure()
{
}

AMateria *Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
