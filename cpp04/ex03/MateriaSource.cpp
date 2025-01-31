#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->_nbMateria = 0;
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource)
{
	for (int i = 0; i < this->_nbMateria; i++)
	{
		delete this->_inventory[i];
	}
	this->_nbMateria = materiaSource._nbMateria;
	for (int i = 0; i < this->_nbMateria; i++)
	{
		this->_inventory[i] = materiaSource._inventory[i]->clone();
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->_nbMateria; i++)
		delete this->_inventory[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiaSource)
{
	if (this != &materiaSource)
	{
		for (int i = 0; i < this->_nbMateria; i++)
		{
			delete this->_inventory[i];
		}
		for (int i = 0; i < this->_nbMateria; i++)
		{
			delete this->_inventory[i];
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *materia)
{
	if (!materia)
	{
		std::cout << "learnMateria it is impossible because Materia is a Pointeur null" << std::endl;
		return ;
	}
	if (this->_nbMateria == 4)
	{
		std::cout << "it is impossible to learn new Materia because the inventory is full " << std::endl;
		return;
	}
	this->_inventory[this->_nbMateria] = materia;
	this->_nbMateria++;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->_nbMateria; i++)
	{
		if (type == this->_inventory[i]->getType())
			return this->_inventory[i]->clone();
	}
	return 0;
}