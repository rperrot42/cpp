#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(FragTrap const &fragTrap);
	FragTrap(std::string name);
	FragTrap();
	~FragTrap();
	FragTrap &operator=(const FragTrap &FragTrap);
	void highFivesGuys(void);

};


#endif
