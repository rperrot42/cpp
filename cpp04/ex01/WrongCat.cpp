//
// Created by rperrot on 1/30/25.
//

#include "WrongCat.hpp"


WrongCat::WrongCat()
{
	std::cout << "constructor of WrongCat called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &wrongCat)
{
	std::cout << "constructor copy of WrongCat called" << std::endl;
	this->_type = wrongCat._type;
}

WrongCat::~WrongCat()
{
	std::cout << "destructor of WrongCat called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Miaoooooo !" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongCat)
{
	std::cout << "operator affectation of WrongCat called" << std::endl;
	if (this != &wrongCat)
		*this = wrongCat;
	return *this;
}