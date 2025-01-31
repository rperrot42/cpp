#include "Brain.hpp"

Brain::Brain()
{
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "I Like eat";
	std::cout << "constructor of Brain called" << std::endl;
}

Brain::~Brain()
{
	delete [] this->ideas;
	std::cout << "Destructor of Brain called" << std::endl;
}

Brain::Brain(Brain &ref)
{
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = ref.ideas[i];
	std::cout << "Recopy constructor of Brain called" << std::endl;
}

Brain &Brain::operator=(Brain const & rhs){
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	std::cout << "Operator affectation of Brain called" << std::endl;
	return *this;
}