class Fixed {
private:
	static const  int	nbBite = 8;
	int					rawBits;
public :
	Fixed();
	Fixed(const Fixed &f);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	Fixed&operator=(Fixed &fixed);
};