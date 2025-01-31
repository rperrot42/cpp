//
// Created by rperrot on 1/31/25.
//

#ifndef EX03_CHARACTER_H
#define EX03_CHARACTER_H

#include "AMateria.hpp"


class Character : public ICharacter
{
private:
	std::string _name;
	AMateria 	*_inventory[4];
	int 		_nbAMataria;
public:
	Character();
	Character(const std::string &name);
	Character(const Character &character);
	~Character();
	Character &operator=(const Character &character);
	std::string const & getName() const;
	void equip(AMateria* m) ;
	void unequip(int idx) ;
	void use(int idx, ICharacter& target) ;
};


#endif //EX03_CHARACTER_H
