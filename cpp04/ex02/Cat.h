#pragma once
#include "AAnimal.h"
#include "Brain.h"

class Cat : public AAnimal
{
public:
	Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	virtual ~Cat();

private:
	Brain *brain;

public:
	Brain *GetBrain() const;
	virtual void MakeSound() const;
};
