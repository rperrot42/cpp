#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	this->_hitPoint = HIT_POINT_FRAGTRAP;
	this->_energyPoint = ENERGIE_POINT_FRAGTRAP;
	this->_attackDamage = ATTACK_DAMGE_FRAGTRAP;
	this->_name = name;
	std::cout << "constructor FragTrap with name is called" << std::endl;
}

FragTrap::FragTrap()
{
	this->_name = "default";
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "default constructor FragTrap is called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "destructor FragTrap of " << this->_name << " is called " << std::endl;

}

FragTrap::FragTrap(const FragTrap &fragTrap)
{
	this->_name = fragTrap._name;
	this->_attackDamage = fragTrap._attackDamage;
	this->_energyPoint = fragTrap._energyPoint;
	this->_hitPoint = fragTrap._hitPoint;
	std::cout << "Constructor fragTrap of recopy called for " << this->_name  << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap)
{
	std::cout << "operator affectation called" << std::endl;
	if (this != &fragTrap)
	{
		*this = FragTrap();
	}
	return *this;

}

void FragTrap::highFivesGuys(void)
{
	std::cout << "high fives" << std::endl;
}