//
// Created by rperrot on 1/30/25.
//

#ifndef EX00_CAT_H
#define EX00_CAT_H
# include "Animal.hpp"

class Cat : public virtual Animal
{
public:
	virtual void makeSound() const;
	Cat();
	Cat(const Cat &cat);
	virtual ~Cat();
	Cat &operator=(const Cat &cat);
};



#endif //EX00_CAT_H
