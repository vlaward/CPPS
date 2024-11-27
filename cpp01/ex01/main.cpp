#include "Zombie.hpp"

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);


int	main(){
	Zombie	*zomb_there = zombieHorde(4, "pablo");

	for (int i = 0 ; i < 4 ; i++)
		zomb_there[i].Announce();
	delete[] zomb_there;
	return 1;
}

