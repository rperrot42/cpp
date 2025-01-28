#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{}

ClapTrap::ClapTrap(): _name("default"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "default constructor is called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor of " << this->_name << " is called " << std::endl;

}

ClapTrap::ClapTrap(const ClapTrap &clapTrap): _name(clapTrap.getName()),
 _hitPoint(clapTrap.getHitPoint()), _energyPoint(clapTrap.getEnergyPoint()), _attackDamage(clapTrap.getAttackDamage())
{
	std::cout << "Constructor of recopy called for " << this->_name  << std::endl;
}

std::string ClapTrap::getName() const{
	return this->_name;
}

int ClapTrap::getAttackDamage() const
{
	return this->_attackDamage;
}

int ClapTrap::getEnergyPoint() const
{
	return this->_energyPoint;
}

int ClapTrap::getHitPoint() const
{
	return this->_hitPoint;
}

void ClapTrap::setAttackDamage(const int attackDamage){
	this->_attackDamage = attackDamage;
}

void ClapTrap::setHitPoint(const int hitPoint){
	this->_attackDamage = hitPoint;
}

void ClapTrap::setEnergyPoint(const int energyPoint)
{
	this->_energyPoint=energyPoint;
}

void ClapTrap::setName(std::string name)
{
	this->_name = name;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap){
	std::cout << "operator affectation called" << std::endl;
	if (this != &clapTrap)
	{
		*this = ClapTrap();
	}
	return *this;
}

void ClapTrap::attack(const std::string& target){
	if (this->_hitPoint > 0 && this->_energyPoint > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage
				  << " points of damage!" << std::endl;
		this->_energyPoint--;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " have not ";
		if (this-> _hitPoint <= 0)
			std::cout << "hit point";
		if (this-> _hitPoint <= 0 && this->_energyPoint <= 0)
			std::cout << " and ";
		if (this->_energyPoint <= 0)
			std::cout << "energy point";
		std::cout << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > this->_hitPoint)
		this->_hitPoint = 0;
	else
	{
		this->_hitPoint = this->_hitPoint - amount;
	}
	std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage" <<  std::endl;
	if (!this->_hitPoint)
		std::cout << "Claptrap " << this->_name << " is died" << std::endl;

}

void  ClapTrap::beRepaired(unsigned int amount){
	std::cout << "Claptrap " << this->_name;
	if (this->_energyPoint)
	{
		this->_hitPoint += amount;
		this->_energyPoint--;
		std::cout << " is repaired of " << amount << " hit point, now he has " << this->_hitPoint << " hit point and has " << this->_energyPoint << " points of energy " << std::endl;
	}
	else
		std::cout << " has 0 point of energy is impossible to be repaired" << std::endl;
}
