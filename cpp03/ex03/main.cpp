#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a  = DiamondTrap("raphael");
	DiamondTrap b = a;
	DiamondTrap c = DiamondTrap("Raphael");
	std::cout << a.getName() << "\n"; //  .attack("oio");
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.takeDamage(20);
	a.attack("nino");
	c.attack("OUI");
	c.takeDamage(10);
	c.attack("target");
	a.highFivesGuys();
	a.highFivesGuys();
	a.whoAmI();
	a.guardGate();

}