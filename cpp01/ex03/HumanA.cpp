//
// Created by rperrot on 9/26/24.
//

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
}
HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon &weapon)
{
	this->weapon = weapon;
}

Weapon HumanA::getWeapon()
{
	return this->weapon;
}

std::string &HumanA::getName()
{
	return this->name;
}

void HumanA::setName(std::string name)
{
	this->name = name;
}

