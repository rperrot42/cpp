

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
	std::cout << "default constructor DiamondTrap is called" << std::endl;
	this->_name = "default_clap_name";
	this->_diamondName = "default";
	this->_energyPoint = ENERGIE_POINT_SCAVTRAP;
	this->_hitPoint = HIT_POINT_FRAGTRAP;
	this->_attackDamage = ATTACK_DAMGE_FRAGTRAP;
}

DiamondTrap::DiamondTrap(DiamondTrap const &diamondTrap){
	std::cout << "Constructor fragTrap of recopy called for " << this->_name  << std::endl;
	this->_diamondName = diamondTrap._diamondName;
	this->_hitPoint = diamondTrap._hitPoint;
	this->_name = diamondTrap._name;
	this->_energyPoint = diamondTrap._energyPoint;
	this->_attackDamage = diamondTrap._attackDamage;
}
DiamondTrap::DiamondTrap(std::string name)
{
	this->_name = name + "_clap_name";
	this->_diamondName = name;
	this->_energyPoint = ENERGIE_POINT_SCAVTRAP;
	this->_hitPoint = HIT_POINT_FRAGTRAP;
	this->_attackDamage = ATTACK_DAMGE_FRAGTRAP;
	std::cout << "constructor DiamondTrap with name is called" << std::endl;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "destructor DiamondTrap of " << this->_name << " is called " << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondTrap)
{
	std::cout << "operator affectation DiamondTrap called" << std::endl;
	if (this != &diamondTrap)
	{
		*this = DiamondTrap();
	}
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << "My Claptrap name is " << this->_name << std::endl;
	std::cout << "My Diamond name  is " << this->_diamondName << std::endl;
}