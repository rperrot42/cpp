//
// Created by rperrot on 1/30/25.
//

#ifndef WRONGWrongAnimal_HPP
# define WRONGWrongAnimal_HPP

# include <iostream>

class WrongAnimal
{
		public:
		virtual void makeSound() const;
		WrongAnimal();
		WrongAnimal(const WrongAnimal &wrongAnimal);
		virtual ~WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal &wrongAnimal);
		std::string	getType() const;
		void	setType(const std::string type);

		protected:
		std::string _type;
};

#endif 
