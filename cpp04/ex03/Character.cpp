#include "Character.hpp"

Character::Character()
{
	this->_name = "default";
	this->_nbAMataria = 0;
}

Character::~Character()
{
	for (int i = 0; i < this->_nbAMataria; i++)
	{
		delete this->_inventory[i];
	}
}

const std::string &Character::getName() const
{
	return this->_name;
}

Character::Character(const Character &character)
{
	for (int i = 0; i < character._nbAMataria; i++)
		delete character._inventory[i];
	this->_nbAMataria = character._nbAMataria;
	this->_name = character._name;
	for (int i = 0; i < character._nbAMataria; i++)
	{
		this->_inventory[i] = character._inventory[i]->clone();
	}
}

Character::Character(const std::string &name)
{
	this->_nbAMataria = 0;
	this->_name = name;
}

Character &Character::operator=(const Character &character)
{
	for (int i = 0; i < character._nbAMataria; i++)
		delete character._inventory[i];
	if (this != &character){
		this->_name = character._name;
		this->_nbAMataria = character._nbAMataria;
		for (int i = 0; i < character._nbAMataria; i++)
		{
			this->_inventory[i] = character._inventory[i]->clone();
		}
	}
	return *this;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < this->_nbAMataria && idx >= 0)
		this->_inventory[idx]->use(target);
	else
		std::cout << "Index of inventory is out of range" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= this->_nbAMataria || idx < 0)
	{
		std::cout << "in the unequip method the index is greater than or equal to or number of inventory" << std::endl;
		return;
	}
	this->_nbAMataria--;
	for (int i = idx; i < this->_nbAMataria; i++)
	{
		this->_inventory[i] = this->_inventory[i + 1];
	}
}

void Character::equip(AMateria* m)
{
	if (!m)
		std::cout << "equip is Impossible because materia in parameter is null" << std::endl;
	else if (this->_nbAMataria == 4)
		std::cout << "equip it is impossible there is 4 objects in inventory" << std::endl;
	else
	{
		for (int i = 0 ; i < this->_nbAMataria; i++){
			if (m == this->_inventory[i])
			{
				std::cout << "Materia is already in inventory" << std::endl;
				return ;
			}
		}
		this->_inventory[this->_nbAMataria++] = m;
	}
}
