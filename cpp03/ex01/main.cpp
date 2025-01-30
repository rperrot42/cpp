#include "ScavTrap.hpp"

int main()
{
	ScavTrap a  = ScavTrap("raphael");
	ScavTrap b = a;
	ClapTrap c = ClapTrap("Raphael");
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
	a.guardGate();
	a.guardGate();
}