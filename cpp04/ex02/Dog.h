#pragma once
#include "AAnimal.h"
#include "Brain.h"

class Dog : public AAnimal
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
