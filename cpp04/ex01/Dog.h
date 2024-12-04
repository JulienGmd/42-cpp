#pragma once
#include "Animal.h"
#include "Brain.h"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	virtual ~Dog();

private:
	Brain *brain;

public:
	Brain *GetBrain() const;
	virtual void MakeSound() const;
};
