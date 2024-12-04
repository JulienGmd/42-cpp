#pragma once
#include <string>

class AMateria;

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria *) = 0;
	virtual AMateria *createMateria(std::string const &type) = 0;
	virtual AMateria *getMateria(int idx) const = 0;
};
