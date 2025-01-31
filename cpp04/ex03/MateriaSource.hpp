//
// Created by rperrot on 1/31/25.
//

#ifndef EX03_MATERIASOURCE_HPP
#define EX03_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	int _nbMateria;
	AMateria *_inventory[4];
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource &materiaSource);
	MateriaSource &operator=(const MateriaSource &materiaSource);
	void learnMateria(AMateria* materia);
	AMateria* createMateria(std::string const & type);
};


#endif
