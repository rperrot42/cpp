#include "Fixed.hpp"

int main( void ) {
	{
		Fixed a;
		Fixed r = Fixed(45);
		Fixed const b(150.0f);
		Fixed const e(1000000.0f);
		Fixed const c(42.42f);
		Fixed const d(b);
		Fixed g(0);
		Fixed h(1);
		a = Fixed(1234.4321f);
		std::cout << "min e b : " << Fixed::min(e, b) << std::endl;
		std::cout << "min a r: " << Fixed::min(a, r) << std::endl;
		std::cout << "max e b : " << Fixed::max(e, b) << std::endl;
		std::cout << "max a r: " << Fixed::max(a, r) << std::endl;

		std::cout << "g " << ++g << std::endl;
		std::cout << "g " << g++ << std::endl;
		std::cout << "g " << g << std::endl;
		std::cout << "h " << --h << std::endl;
		std::cout << "h " << h-- << std::endl;
		std::cout << "h " << h << std::endl;
		std::cout << (a < b) << std::endl;
		std::cout << (a > b) << std::endl;
		std::cout << (a <= b) << std::endl;
		std::cout << (b >= e) << std::endl;
		std::cout << (e != b) << std::endl;
		std::cout << (b == g) << std::endl;
		Fixed y = a + e;
		Fixed z = e - a;
		Fixed x = b * e;
		Fixed w = e / b;
		std::cout << "y is " << y << std::endl;
		std::cout << "z is " << z << std::endl;
		std::cout << "x is " << x << std::endl;
		std::cout << "w is " << w << std::endl;
		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "d is " << d << std::endl;
		std::cout << "a is " << a.toInt() << " as integer" << std::endl;
		std::cout << "b is " << b.toInt() << " as integer" << std::endl;
		std::cout << "c is " << c.toInt() << " as integer" << std::endl;
		std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	}
	{
		Fixed a;
		Fixed const b(Fixed(5.05f) * Fixed(2));
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max(a, b) << std::endl;
	}
	return 0;
}