#pragma once
#include <string>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &other);
	WrongAnimal &operator=(const WrongAnimal &other);
	virtual ~WrongAnimal();

protected:
	std::string type;

public:
	std::string GetType() const;
	void MakeSound() const;
};
