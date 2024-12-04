#include "WrongAnimal.h"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	type = "";
	std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
	std::cout << "WrongAnimal created (copy)" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this == &other)
		return *this;
	type = other.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destroyed" << std::endl;
}

std::string WrongAnimal::GetType() const
{
	return type;
}

void WrongAnimal::MakeSound() const
{
	std::cout << "Sound" << std::endl;
}
