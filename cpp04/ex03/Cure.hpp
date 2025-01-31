

#ifndef EX03_CURE_H
#define EX03_CURE_H
# include "AMateria.hpp"
class ICharacter;

class Cure : public AMateria
{
public:
	Cure &operator=(const Cure &cure);
	Cure(Cure const & cure);
	Cure();
	~Cure();
	void use(ICharacter& target);
	AMateria *clone() const;
};



#endif