
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
	int getNbBite() const;
	friend std::ostream& operator<<(std::ostream& os, const Fixed& person);
	Fixed& operator=(const Fixed &fixed);
	bool operator<(const Fixed& fixed) const;
	bool operator>(const Fixed& fixed) const;
	bool operator<=(const Fixed& fixed) const;
	bool operator>=(const Fixed& fixed) const;
	bool operator!=(const Fixed& fixed) const;
	bool operator==(const Fixed& fixed) const;
	Fixed operator+(const Fixed& fixed) const;
	Fixed operator-(const Fixed& fixed) const;
	Fixed operator*(const Fixed& fixed) const;
	Fixed operator/(const Fixed& fixed) const;
	Fixed& operator++(void);
	Fixed operator++(int);
	Fixed& operator--(void);
	Fixed operator--(int);
	const static Fixed& min(const Fixed &fixed1, const Fixed &fixed2);
	static Fixed& min(Fixed &fixed1, Fixed &fixed2);
	const static Fixed& max(const Fixed &fixed1, const Fixed &fixed2);
	static Fixed& max(Fixed &fixed1, Fixed &fixed2);
};
