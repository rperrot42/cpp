#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "constructor of Animal called" << std::endl;
	this->_type = "Animal";
}

Animal::Animal(const Animal &animal)
{
	std::cout << "constructor copy of Animal called" << std::endl;
	this->_type = animal._type;
}

Animal::~Animal()
{
	std::cout << "destructor of Animal called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "animal sound" << std::endl;
}

Animal &Animal::operator=(const Animal &animal)
{
	std::cout << "operator affectation of Animal called" << std::endl;
	if (this != &animal)
		*this = animal;
	return *this;
}

std::string	Animal::getType() const
{
	return this->_type;
}
void	Animal::setType(const std::string type)
{
	this->_type = type;
}