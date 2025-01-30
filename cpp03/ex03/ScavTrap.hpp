#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

#define ENERGIE_POINT_SCAVTRAP 50
#define HIT_POINT_SCAVTRAP 100
#define ATTACK_DAMGE_SCAVTRAP 20

class ScavTrap : public virtual ClapTrap
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
