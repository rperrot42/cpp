//
// Created by rperrot on 9/26/24.
//

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}
HumanB::~HumanB()
{
}

void HumanB::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

Weapon *HumanB::getWeapon()
{
	return this->weapon;
}

std::string &HumanB::getName()
{
	return this->name;
}

void HumanB::setName(std::string name)
{
	this->name = name;
}


