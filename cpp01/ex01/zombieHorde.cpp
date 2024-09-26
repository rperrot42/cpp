//
// Created by rperrot on 9/26/24.
//

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	Zombie *zombies = new Zombie[N];
	for (int i = 0; i < N; i++){
		zombies[i].setName(name);
	}
	return zombies;
}