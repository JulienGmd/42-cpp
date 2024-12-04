#include "WrongCat.h"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat created" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << "WrongCat created (copy)" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this == &other)
		return *this;
	WrongAnimal::operator=(other);
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed" << std::endl;
}

void WrongCat::MakeSound() const
{
	std::cout << "Meow" << std::endl;
}
