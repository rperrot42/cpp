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

}

void Zombie::setName(std::string name)
{
	this->name = name;
}


