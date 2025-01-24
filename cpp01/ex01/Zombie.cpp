#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::Zombie()
{
}


void Zombie::announce()
{
	std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "destructor called, the name of Zombie is " << this->name << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}


