#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "constructor of WrongAnimal called" << std::endl;
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal)
{
	std::cout << "constructor copy of wrongAnimal called" << std::endl;
	this->_type = wrongAnimal._type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "destructor of WrongAnimal called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrongAnimal)
{
	std::cout << "operator affectation of wrongAnimal called" << std::endl;
	if (this != &wrongAnimal)
		*this = wrongAnimal;
	return *this;
}

std::string	WrongAnimal::getType() const
{
	return this->_type;
}
void	WrongAnimal::setType(const std::string type)
{
	this->_type = type;
}