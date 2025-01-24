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

int Fixed::getNbBite() const
{
	std::cout << "getNbBite member function called" << std::endl;
	return this->nbBite;
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

bool Fixed::operator<(const Fixed& fixed) const
{
	return fixed.getRawBits() > this->rawBits;
}

bool Fixed::operator>(const Fixed& fixed) const
{
	return fixed.getRawBits() < this->rawBits;
}

bool Fixed::operator<=(const Fixed& fixed) const
{
	return fixed.getRawBits() >= this->rawBits;
}

bool Fixed::operator>=(const Fixed& fixed) const
{
	return fixed.getRawBits() <= this->rawBits;
}

bool Fixed::operator==(const Fixed& fixed) const
{
	return fixed.getRawBits() == this->rawBits;
}

bool Fixed::operator!=(const Fixed& fixed) const
{
	return fixed.getRawBits() != this->rawBits;
}

Fixed Fixed::operator+(const Fixed& fx1) const{
	Fixed newFixed = Fixed(fx1);
	newFixed.setRawBits(newFixed.getRawBits() + this->getRawBits());
	return newFixed;
}

Fixed Fixed::operator-(const Fixed& fx1) const{
	Fixed newFixed = Fixed(fx1);
	newFixed.setRawBits(this->getRawBits() - newFixed.getRawBits());
	return newFixed;
}

Fixed Fixed::operator*(const Fixed& fx1) const
{
	Fixed newFixed = Fixed();
	long rawBitsFx1 = fx1.getRawBits();
	long rawBitsFx = this->getRawBits();
	newFixed.setRawBits((rawBitsFx1 * rawBitsFx) >> this->getNbBite());
	return newFixed;
}

Fixed Fixed::operator/(const Fixed& fx1) const{
	Fixed newFixed = Fixed();
	long rawBitsFx1 = fx1.getRawBits();
	long rawBitsFx = this->getRawBits();
	newFixed.setRawBits((rawBitsFx  << this->getNbBite()) / rawBitsFx1);
	return newFixed;
}

Fixed& Fixed::operator++(void){
	++this->rawBits;
	return *this;
}

Fixed Fixed::operator++(int){
	Fixed temp = *this;
	++this->rawBits;
	return temp;
}

Fixed& Fixed::operator--(void){
	--this->rawBits;
	return *this;
}

Fixed Fixed::operator--(int){
	Fixed temp = *this;
	--this->rawBits;
	return temp;
}

const Fixed& Fixed::min(const Fixed &fixed1, const Fixed &fixed2) {
	if (fixed1 < fixed2)
		return fixed1;
	return fixed2;
}

Fixed& Fixed::min(Fixed &fixed1, Fixed &fixed2){
	if (fixed1 < fixed2)
		return fixed1;
	return fixed2;
}

const Fixed& Fixed::max(const Fixed &fixed1, const Fixed &fixed2) {
	if (fixed1 > fixed2)
		return fixed1;
	return fixed2;
}

Fixed& Fixed::max(Fixed &fixed1, Fixed &fixed2){
	if (fixed1 > fixed2)
		return fixed1;
	return fixed2;
}