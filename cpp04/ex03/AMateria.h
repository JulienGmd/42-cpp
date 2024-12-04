#pragma once
#include <string>

class ICharacter;

class AMateria
{
public:
	AMateria();
	AMateria(const std::string &type);
	AMateria(const AMateria &other);
	AMateria &operator=(const AMateria &other);
	virtual ~AMateria();

protected:
	std::string type;

public:
	const std::string &getType() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};
