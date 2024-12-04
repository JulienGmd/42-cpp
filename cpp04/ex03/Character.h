#pragma once
#include "ICharacter.h"

class Character : public ICharacter
{
public:
	Character();
	Character(const std::string &name);
	Character(const Character &other);
	Character &operator=(const Character &other);
	virtual ~Character();

protected:
	std::string name;
	AMateria *materias[4];

public:
	virtual const std::string &getName() const;
	virtual void equip(AMateria *m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter &target);
};
