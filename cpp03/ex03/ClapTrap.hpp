
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
# include <iostream>
class ClapTrap
{
public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &clapTrap);
	ClapTrap();
	virtual ~ClapTrap();
	ClapTrap &operator=(const ClapTrap &clapTrap);
	std::string getName() const;
	int getHitPoint() const;
	int getEnergyPoint() const;
	int getAttackDamage() const;
	void setAttackDamage(const int attackDamage);
	void setHitPoint(const int hitPoint);
	void setEnergyPoint(const int energyPoint);
	void setName(std::string name);
	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected:
	std::string		_name;
	unsigned int	_hitPoint;
	unsigned int	_energyPoint;
	unsigned int	_attackDamage;
};
#endif