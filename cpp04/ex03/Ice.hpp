//
// Created by rperrot on 1/31/25.
//

#ifndef EX03_ICE_H
#define EX03_ICE_H

#include "AMateria.hpp"

class ICharacter;

class Ice : public AMateria
{
public:
	Ice &operator=(const Ice &ice);
	Ice(Ice const & ice);
	Ice();
	~Ice();
	void use(ICharacter& target);
	AMateria *clone() const;
};

#endif //EX03_ICE_H
