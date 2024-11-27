#include "Zombie.hpp"

Zombie::Zombie(void){
}

Zombie::Zombie(std::string str) : name(str){
}

Zombie::~Zombie(){
	std::cout << this->name << " : No more braaaaaaainzzzzzzzzzzz...." << std::endl;
}

void	Zombie::Announce(void){
	std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::SetName(std::string name){
	this->name = name;
}
 
Zombie*	zombieHorde(int N, std::string name){
	Zombie*	ret = new Zombie[N];

	for (int i = 0 ; i < N ; i++)
		ret[i].SetName(name);
	return (ret);
}