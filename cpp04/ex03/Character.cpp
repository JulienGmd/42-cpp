#include "Character.h"
#include "AMateria.h"

Character::Character()
{
	name = "default";
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
}

Character::Character(const std::string &name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
}

Character::Character(const Character &other)
{
	*this = other;
}

Character &Character::operator=(const Character &other)
{
	if (this == &other)
		return *this;
	name = other.name;
	for (int i = 0; i < 4; i++)
		if (materias[i])
			delete materias[i];
	for (int i = 0; i < 4; i++)
		materias[i] = other.materias[i] ? other.materias[i]->clone() : NULL;
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (materias[i])
			delete materias[i];
}

const std::string &Character::getName() const
{
	return (name);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!materias[i])
		{
			materias[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		materias[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && materias[idx])
		materias[idx]->use(target);
}
