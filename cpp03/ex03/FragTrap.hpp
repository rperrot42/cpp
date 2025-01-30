#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#define ENERGIE_POINT_FRAGTRAP 100
#define HIT_POINT_FRAGTRAP 100
#define ATTACK_DAMGE_FRAGTRAP 30

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:
	FragTrap(FragTrap const &fragTrap);
	FragTrap(std::string name);
	FragTrap();
	~FragTrap();
	FragTrap &operator=(const FragTrap &diamondTrap);
	void highFivesGuys(void);
};


#endif
