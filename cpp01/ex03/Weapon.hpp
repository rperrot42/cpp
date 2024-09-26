//
// Created by rperrot on 9/26/24.
//

#ifndef EX03_WEAPON_H
#define EX03_WEAPON_H


class Weapon
{
private:
	std::string type;
public:
	Weapon(const std::string type);
	~Weapon();
	const std::string &getType() const;
	void setType(const std::string &type);
};


#endif //EX03_WEAPON_H
