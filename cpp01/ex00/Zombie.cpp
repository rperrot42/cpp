#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void Zombie::announce()
{
	std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "destructor called, the name of Zombie is " << this->name << std::endl;
}
