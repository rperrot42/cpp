
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
int main()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(0);
	src->learnMateria(new Cure());
	ICharacter *me = new Character("me");
	AMateria *tmp;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);

	me->unequip(0);
	delete tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);


	{
		AMateria *aMateriaList[5];
		for (int i = 0; i < 5; i++)
		{
			aMateriaList[i] = src->createMateria("cure");
			std::cout << &aMateriaList[i] << std::endl;
			me->equip(aMateriaList[i]);
		}
		for (int i = 3; i >= 0; i--)
		{
			me->unequip(i);
		}
		for (int i = 0; i < 5; i++)
			delete aMateriaList[i];
	}
	delete bob;
	delete me;
	delete src;
	return 0;
}