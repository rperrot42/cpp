//
// Created by rperrot on 1/30/25.
//

#ifndef EX00_WRONGCat_H
# define EX00_WRONGCat_H
# include "WrongAnimal.hpp"


class WrongCat : public  WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat &wrongCat);
	 ~WrongCat();
	WrongCat &operator=(const WrongCat &wrongCat);
};


#endif //EX00_WRONGWrongCat_H
