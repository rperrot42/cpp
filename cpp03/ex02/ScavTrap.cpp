#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	this->_name = name;
	std::cout << "constructor ScavTrap with name is called" << std::endl;
}

ScavTrap::ScavTrap()
{
	this->_name = "default";
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "default constructor ScavTrap is called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "destructor ScavTrap of " << this->_name << " is called " << std::endl;

}

ScavTrap::ScavTrap(const ScavTrap &scavTrap)
{
	this->_name = scavTrap._name;
	this->_attackDamage = scavTrap._attackDamage;
	this->_energyPoint = scavTrap._energyPoint;
	this->_hitPoint = scavTrap._hitPoint;
	std::cout << "Constructor ScavTrap of recopy called for " << this->_name  << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap)
{
	std::cout << "operator affectation called" << std::endl;
	if (this != &scavTrap)
	{
		*this = ScavTrap();
	}
	return *this;

}
