#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(ScavTrap const &scavtrap);
	ScavTrap(std::string name);
	ScavTrap();
	~ScavTrap();
	ScavTrap &operator=(const ScavTrap &scavTrap);
	void guardGate();

private:
};

#endif
