#pragma once
#include "Animal.h"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	virtual ~Cat();

public:
	virtual void MakeSound() const;
};
