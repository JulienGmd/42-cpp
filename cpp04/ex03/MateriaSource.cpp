#include "MateriaSource.h"
#include "AMateria.h"
#include <iostream>

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	*this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this == &other)
		return *this;
	for (int i = 0; i < 4; i++)
		if (materias[i])
			delete materias[i];
	for (int i = 0; i < 4; i++)
		materias[i] = other.materias[i] ? other.materias[i]->clone() : NULL;
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (materias[i])
			delete materias[i];
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!materias[i])
		{
			materias[i] = materia->clone();
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (materias[i] && materias[i]->getType() == type)
			return materias[i]->clone();
	}
	return NULL;
}

AMateria *MateriaSource::getMateria(int idx) const
{
	if (idx >= 0 && idx < 4)
		return materias[idx];
	return NULL;
}
