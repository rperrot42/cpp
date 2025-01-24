#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
class Point
{
private:
	const Fixed	x;
	const Fixed	y;

public:
	Point();
	~Point();
	Point(const Point &point);
	Point(const float x, const float y);
	Fixed getX() const;
	Fixed getY() const;
};


#endif //EX03_POINT_H
