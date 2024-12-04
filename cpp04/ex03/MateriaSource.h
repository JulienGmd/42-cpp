#pragma once
#include "IMateriaSource.h"
#include <string>

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(const MateriaSource &other);
	MateriaSource &operator=(const MateriaSource &other);
	virtual ~MateriaSource();

protected:
	AMateria *materias[4];

public:
	virtual void learnMateria(AMateria *);
	virtual AMateria *createMateria(std::string const &type);
	virtual AMateria *getMateria(int idx) const;
};
