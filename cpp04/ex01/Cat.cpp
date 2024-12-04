#include "Cat.h"
#include <iostream>

Cat::Cat() : Animal()
{
	brain = new Brain();
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
	brain = new Brain(*other.brain);
	return *this;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destroyed" << std::endl;
}

Brain *Cat::GetBrain() const
{
	return brain;
}

void Cat::MakeSound() const
{
	std::cout << "Meow" << std::endl;
}
