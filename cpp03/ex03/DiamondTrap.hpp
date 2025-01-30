#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap :
		public  ScavTrap, public FragTrap
{
public:
	DiamondTrap(DiamondTrap const &DiamondTrap);
	DiamondTrap(std::string name);
	DiamondTrap();
	virtual ~DiamondTrap();
	DiamondTrap &operator=(const DiamondTrap &diamondTrap);
	using ScavTrap::attack;
	void whoAmI();

private:
	std::string _diamondName;
};


#endif
