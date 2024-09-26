//
// Created by rperrot on 9/26/24.
//

#ifndef EX03_HUMANB_H
#define EX03_HUMANB_H
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string name);
	~HumanB();
	void 		attack();
	void 		setWeapon(Weapon &weapon);
	Weapon 		*getWeapon();
	std::string	&getName();
	void 		setName(std::string name);

private:
	std::string name;
	Weapon *weapon;
};


#endif //EX03_HUMANB_H
