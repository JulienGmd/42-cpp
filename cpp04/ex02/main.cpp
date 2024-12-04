#include "Cat.h"
#include "Dog.h"
#include "Utils.h"
#include <iostream>

int main()
{
	// Doesn't compile:
	// AAnimal animal;

	Cat cat;
	Dog dog;
	AAnimal *animal = new Dog();

	return 0;
}
