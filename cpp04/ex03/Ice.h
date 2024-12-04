#pragma once
#include "AMateria.h"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &other);
	Ice &operator=(const Ice &other);
	virtual ~Ice();

public:
	virtual AMateria *clone() const;
	virtual void use(ICharacter &target);
};
