#pragma once
#include <string>

class AAnimal
{
public:
	AAnimal();
	AAnimal(const AAnimal &other);
	AAnimal &operator=(const AAnimal &other);
	virtual ~AAnimal();

protected:
	std::string type;

public:
	std::string GetType() const;
	// = 0 means pure virtual function, which makes this class abstract
	virtual void MakeSound() const = 0;
};
