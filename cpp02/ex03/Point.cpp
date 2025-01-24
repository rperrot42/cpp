#include "Point.hpp"

Point::Point(){
	std::cout << "Default Point constructor called" << std::endl;
}

Point::Point(const Point &f): x(f.x), y(f.y)
{
	std::cout << "Copy constructor point called" << std::endl;
}

Point::Point(const float x, const float y) :x(Fixed(x)), y(Fixed(y))
{
	std::cout << "float point constructor called" << std::endl;
}

Fixed Point ::getX() const{
	return this->x;
}

Fixed Point ::getY() const{
	return this->y;
}

Point ::~Point()
{
	std::cout << "Destructor Point called" << std::endl;
}