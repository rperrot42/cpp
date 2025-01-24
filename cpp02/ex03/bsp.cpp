#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point){
	Fixed	w1 = (b.getX() - a.getX()) * (point.getX() - a.getX()) +  (b.getY() - a.getY()) * (point.getY() - a.getY());
	Fixed	w2 = (c.getX() - b.getX()) * (point.getX() - b.getX()) +  (c.getY() - b.getY()) * (point.getY() - b.getY());
	Fixed	w3 = (a.getX() - c.getX()) * (point.getX() - c.getX()) +  (a.getY() - c.getY()) * (point.getY() - c.getY());
	return ((w1 > 0 && w2 > 0 && w3 > 0) || (w1 < 0 && w2 < 0 && w3 < 0));
}