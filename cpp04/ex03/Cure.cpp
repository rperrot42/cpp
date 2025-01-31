#include "Cure.hpp"

Cure::Cure()
{
	this->_type = "cure";
}

Cure::~Cure()
{}

Cure::Cure(const Cure &cure)
{
	this->_type = cure.getType();
}

Cure &Cure::operator=(const Cure &cure)
{
	if (this != &cure)
		this->_type = cure._type;
	return *this;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria *Cure::clone() const
{
	return new Cure();
}
