
#include "Ice.hpp"

Ice::Ice()
{
	this->_type = "ice";}

Ice::~Ice()
{}

Ice::Ice(const Ice &ice)
{
	this->_type = ice.getType();
}

Ice &Ice::operator=(const Ice &ice)
{
	if (this != &ice)
		this->_type = ice._type;
	return *this;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria *Ice::clone() const
{

	return new Ice();
}
