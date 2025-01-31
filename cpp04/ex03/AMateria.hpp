#ifndef EX03_AMATERIA_HPP
# define EX03_AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	 std::string _type;
public:
	AMateria(std::string const & type);
	AMateria(AMateria const & aMateria);
	AMateria();
	virtual ~AMateria();
	AMateria &operator=(const AMateria &aMateria);
	std::string const & getType() const; //Returns the materia _type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif //EX03_AMATERIA_H
