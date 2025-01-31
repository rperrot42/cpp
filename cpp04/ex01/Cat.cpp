//
// Created by rperrot on 1/30/25.
//

#include "Cat.hpp"


Cat::Cat()
{
	std::cout << "constructor of Cat called" << std::endl;
	this->_brain =  new Brain();
	this->_type = "Cat";
}

Cat::Cat(const Cat &cat)
{
	std::cout << "constructor copy of cat called" << std::endl;
	this->_brain = new Brain(*cat._brain);
	this->_type = cat._type;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "destructor of Cat called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Miaoooooo !" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
	std::cout << "operator affectation of cat called" << std::endl;
	this->_type = cat._type;
	this->_brain = new Brain(*cat._brain);
	return *this;
}