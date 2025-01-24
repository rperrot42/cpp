#include "Point.hpp"
#include <iostream>
#include <cstdlib>

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( int argc, char **argv ) {

	Point a = Point(-6, 3);
	Point b = Point(-5, -2);
	Point c = Point(2, 0);
	Point p = Point(0, 0);

	if (argc > 2)
	{
		char *endptr;
		std::cout << bsp(a, b, c, Point(strtof(argv[1], &endptr), strtof(argv[2], &endptr))) << std::endl;
	}
	return 0;
}