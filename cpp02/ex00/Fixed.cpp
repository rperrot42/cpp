#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(){
	this->rawBits = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f){
	this->rawBits = f.rawBits;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed ::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->rawBits;
}

void Fixed:: setRawBits(int rawBit)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->rawBits = rawBit;
}

Fixed& Fixed::operator=(Fixed &newFixed){
	std::cout<< "Copy assignment operator called" << std::endl;
	if (this != &newFixed)
		this->rawBits = newFixed.getRawBits();
	return *this;
}