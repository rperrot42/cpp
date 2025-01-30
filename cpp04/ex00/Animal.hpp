//
// Created by rperrot on 1/30/25.
//

#ifndef EX00_ANIMAL_HPP
# define EX00_ANIMAL_HPP
# include <iostream>

class Animal
{
public:
	virtual void makeSound() const;
	Animal();
	Animal(const Animal &animal);
	virtual ~Animal();
	Animal &operator=(const Animal &animal);
	std::string	getType() const;
	void	setType(const std::string type);

protected:
	std::string _type;
};


#endif //EX00_ANIMAL_H
