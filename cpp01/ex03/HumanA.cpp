//
// Created by rperrot on 9/26/24.
//

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(&weapon)
{
}
HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

