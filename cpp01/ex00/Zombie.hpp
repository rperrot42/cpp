//
// Created by rperrot on 9/26/24.
//
#include <iostream>
#ifndef EX00_ZOMBIE_HPP
#define EX00_ZOMBIE_HPP


class Zombie
{
public:
	Zombie(std::string name);
	~Zombie();
	void announce();
private:
	std::string name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif //EX00_ZOMBIE_HPP
