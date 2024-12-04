#pragma once
#include <string>

class Brain
{
public:
	Brain();
	Brain(const Brain &other);
	Brain &operator=(const Brain &other);
	virtual ~Brain();

protected:
	std::string ideas[100];

public:
	void setIdea(int index, std::string idea);
	std::string getIdea(int index) const;
};
