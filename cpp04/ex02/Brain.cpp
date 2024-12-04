#include "Brain.h"
#include "Utils.h"
#include <iostream>

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		ideas[i] = "Idea " + Utils::itos(i);
	std::cout << "Brain created" << std::endl;
}

Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "Brain created (copy)" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
	if (this == &other)
		return *this;
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destroyed" << std::endl;
}

void Brain::setIdea(int index, std::string idea)
{
	ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
	return ideas[index];
}
