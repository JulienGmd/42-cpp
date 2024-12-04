#include "Cat.h"
#include "Dog.h"
#include "Utils.h"
#include <iostream>

int main()
{
	Animal *animals[4];

	animals[0] = new Cat();
	animals[1] = new Cat(static_cast<Cat &>(*animals[0]));
	animals[2] = new Dog();
	animals[3] = new Dog(static_cast<Dog &>(*animals[2]));

	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
		std::cout << static_cast<Cat &>(*animals[i]).GetBrain()->getIdea(0) << std::endl;

	for (int i = 0; i < 4; i++)
		static_cast<Cat &>(*animals[i]).GetBrain()->setIdea(0, "Another idea " + Utils::itos(i));

	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
		std::cout << static_cast<Cat &>(*animals[i]).GetBrain()->getIdea(0) << std::endl;

	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
		delete animals[i];

	return 0;
}
