#include "Cat.h"
#include <iostream>

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	*this = other;
	std::cout << "Cat created (copy)" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this == &other)
		return *this;
	Animal::operator=(other);
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destroyed" << std::endl;
}

void Cat::MakeSound() const
{
	std::cout << "Meow" << std::endl;
}
