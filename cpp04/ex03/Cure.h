#pragma once
#include "AMateria.h"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure &other);
	Cure &operator=(const Cure &other);
	virtual ~Cure();

public:
	virtual AMateria *clone() const;
	virtual void use(ICharacter &target);
};
