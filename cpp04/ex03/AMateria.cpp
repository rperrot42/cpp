#include "AMateria.hpp"

AMateria::AMateria()
{}

AMateria::~AMateria()
{}

AMateria::AMateria(const AMateria &aMateria){
	this->_type = aMateria._type;
}

AMateria::AMateria(std::string const & type) : _type(type)
{}

AMateria &AMateria::operator=(const AMateria &aMateria)
{
	if (this != &aMateria)
		this->_type = aMateria._type;
	return *this;
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "default attack " << target.getName() << std::endl;
}