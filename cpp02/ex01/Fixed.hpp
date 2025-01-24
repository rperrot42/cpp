#include <iostream>

class Fixed {
private:
	static const  int	nbBite = 8;
	int					rawBits;
public :
	Fixed();
	Fixed(const Fixed &f);
	Fixed(int const n);
	Fixed(float const n);
	~Fixed();
	int toInt() const;
	float toFloat() const;
	int getRawBits(void) const;
	void setRawBits(int const raw);
	friend std::ostream& operator<<(std::ostream& os, const Fixed& person);
	Fixed& operator=(const Fixed &fixed);
};