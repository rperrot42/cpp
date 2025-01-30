//
// Created by rperrot on 1/30/25.
//

#ifndef EX00_WRONGCat_H
# define EX00_WRONGCat_H
# include "WrongAnimal.hpp"


class WrongCat : public virtual WrongAnimal
{
public:
	virtual void makeSound() const;
	WrongCat();
	WrongCat(const WrongCat &wrongCat);
	virtual ~WrongCat();
	WrongCat &operator=(const WrongCat &wrongCat);
};


#endif //EX00_WRONGWrongCat_H
