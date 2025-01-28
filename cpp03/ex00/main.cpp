#include "ClapTrap.hpp"

int main()
{
	ClapTrap a  = ClapTrap();
	ClapTrap b = a;
	ClapTrap c = ClapTrap("Raphael");
	a.attack("oio");
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
}