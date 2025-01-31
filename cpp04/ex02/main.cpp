#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		//const Animal *meta = new Animal();
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		delete i;
		delete j;
	}
	std::cout << "test exo1" << std::endl;
	{
		Animal *animals[10];
		for (int i = 0; i < 10; i++){
			if (i < 5)
				animals[i] = new Cat();
			else
				animals[i] = new Dog();
			animals[i]->makeSound();
		}
		for (int i = 0; i < 10; i++) {
			delete animals[i];
		}
	}
		return 0;
}