#ifndef EX00_DOG_H
#define EX00_DOG_H
#include "Animal.hpp"
class Dog : public virtual Animal
{
public:
	virtual void makeSound() const;
	Dog();
	Dog(const Dog &dog);
	virtual ~Dog();
	Dog &operator=(const Dog &dog);
};


#endif
