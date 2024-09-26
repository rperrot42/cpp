//
// Created by rperrot on 9/26/24.
//

#ifndef EX02_HUMANA_H
#define EX02_HUMANA_H
#include <iostream>
#include "Weapon.hpp"
class HumanA
{
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void 		attack();
	void 		setWeapon(Weapon &weapon);
	Weapon 		getWeapon();
	std::string	&getName();
	void 		setName(std::string name);

private:
	std::string name;
	Weapon weapon;
};


#endif //EX02_HUMANA_H
