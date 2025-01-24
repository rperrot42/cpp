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

Fixed::Fixed(const int n){
	this->rawBits = n << Fixed::nbBite;
	std::cout << "Int constructor called" << std::endl;
}

Fixed ::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->rawBits;
}

void Fixed:: setRawBits(int const rawBit)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->rawBits = rawBit;
}

Fixed& Fixed::operator=(const Fixed &newFixed){
	std::cout<< "Copy assignment operator called" << std::endl;
	if (this != &newFixed)
		this->rawBits = newFixed.getRawBits();
	return *this;
}

Fixed::Fixed(float const n){
	std::cout << "Float constructor called" << std::endl;
	this->rawBits = n * (1 << (this->nbBite));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed){
	os << fixed.toFloat();
	return os;
}


int Fixed::toInt() const
{
	return this->rawBits >> this->nbBite;
}

float Fixed::toFloat() const
{
	return ((float)this->rawBits) / (1 << this->nbBite);
}
