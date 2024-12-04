#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "WrongAnimal.h"
#include "WrongCat.h"
#include <iostream>

int main()
{
	Animal *animal = new Animal();
	std::cout << "Type: " << animal->GetType() << std::endl;
	animal->MakeSound();
	delete animal;
	std::cout << std::endl;

	// Without a virtual destructor, the destructor of the child class will not
	// be called
	Animal *cat = new Cat();
	std::cout << "Type: " << cat->GetType() << std::endl;
	cat->MakeSound();
	delete cat;
	std::cout << std::endl;

	// Animal *dog = new Dog();
	// std::cout << "Type: " << dog->GetType() << std::endl;
	// dog->MakeSound();
	// delete dog;
	// std::cout << std::endl;

	// Without virtual MakeSound, it's WrongAnimal::MakeSound that will be called
	WrongAnimal *wrongCat = new WrongCat();
	std::cout << "Type: " << wrongCat->GetType() << std::endl;
	wrongCat->MakeSound();
	delete wrongCat;
	std::cout << std::endl;

	return 0;
}
