#include "Character.h"
#include "Cure.h"
#include "Ice.h"
#include "MateriaSource.h"
#include <iostream>

int main()
{
	IMateriaSource *src = new MateriaSource();
	Character *me = new Character("me");
	Character *bob = new Character("bob");
	AMateria *tmp;
	AMateria *tmp2;

	tmp = new Ice();
	src->learnMateria(tmp);
	src->learnMateria(tmp);
	delete tmp;
	tmp = new Cure();
	src->learnMateria(tmp);
	src->learnMateria(tmp);
	src->learnMateria(tmp); // do nothing
	delete tmp;

	std::cout << "\nTest source materias" << std::endl;
	for (int i = 0; i < 4; i++)
		std::cout << "Src Materia " << i << ": " << src->getMateria(i)->getType() << std::endl;

	tmp2 = src->createMateria("ice");
	me->equip(tmp2);
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("nope")); // do nothing
	me->equip(src->createMateria("cure"));
	tmp = src->createMateria("cure");
	me->equip(tmp); // do nothing

	std::cout << "\nTest use" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob); // do nothing

	std::cout << "\nTest replace ice by cure" << std::endl;
	me->unequip(0);
	delete tmp2;
	me->use(0, *bob); // do nothing
	me->equip(tmp);
	me->use(0, *bob);

	Character me2 = Character("me2");
	me2.equip(src->createMateria("ice")); // materia should be deleted on me2 assignation
	me2 = *me;

	std::cout << "\nTest copy use" << std::endl;
	me2.use(0, *bob);
	me2.use(1, *bob);
	me2.use(2, *bob);
	me2.use(3, *bob);

	delete src;
	delete me;
	delete bob;
	return 0;
}
