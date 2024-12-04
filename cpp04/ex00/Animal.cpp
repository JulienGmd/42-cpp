#include "Animal.h"
#include <iostream>

Animal::Animal()
{
	type = "";
	std::cout << "Animal created" << std::endl;
}

Animal::Animal(const Animal &other)
{
	*this = other;
	std::cout << "Animal created (copy)" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this == &other)
		return *this;
	type = other.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destroyed" << std::endl;
}

std::string Animal::GetType() const
{
	return type;
}

void Animal::MakeSound() const
{
	std::cout << "Sound" << std::endl;
}
