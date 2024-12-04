#include "AAnimal.h"
#include <iostream>

AAnimal::AAnimal()
{
	type = "";
	std::cout << "Animal created" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
	*this = other;
	std::cout << "Animal created (copy)" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	if (this == &other)
		return *this;
	type = other.type;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal destroyed" << std::endl;
}

std::string AAnimal::GetType() const
{
	return type;
}
