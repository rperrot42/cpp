
#include "Dog.hpp"


Dog::Dog()
{
	std::cout << "constructor of Dog called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &dog)
{
	std::cout << "constructor copy of dog called" << std::endl;
	this->_type = dog._type;
	this->_brain = new Brain(*dog._brain);
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "destructor of Dog called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Ouaf ! Ouaf !" << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
	std::cout << "operator affectation of dog called" << std::endl;
	this->_type = dog._type;
	this->_brain = new Brain(*dog._brain);
	return *this;
}