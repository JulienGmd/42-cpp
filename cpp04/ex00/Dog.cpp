#include "Dog.h"
#include <iostream>

Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << "Dog created" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	*this = other;
	std::cout << "Dog created (copy)" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this == &other)
		return *this;
	Animal::operator=(other);
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destroyed" << std::endl;
}

void Dog::MakeSound() const
{
	std::cout << "Woof" << std::endl;
}
