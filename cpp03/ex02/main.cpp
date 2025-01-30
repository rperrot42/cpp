#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap a  = FragTrap("raphael");
	FragTrap b = a;
	FragTrap c = FragTrap("Raphael");
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
}