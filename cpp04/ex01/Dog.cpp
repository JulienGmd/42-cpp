#include "Dog.h"
#include <iostream>

Dog::Dog() : Animal()
{
	brain = new Brain();
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
	brain = new Brain(*other.brain);
	return *this;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destroyed" << std::endl;
}

Brain *Dog::GetBrain() const
{
	return brain;
}

void Dog::MakeSound() const
{
	std::cout << "Woof" << std::endl;
}
