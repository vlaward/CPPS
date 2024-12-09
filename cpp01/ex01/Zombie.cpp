/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:01:31 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/09 16:01:33 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	randomChump(std::string name){
	Zombie tmp(name);

	tmp.Announce(); 
}

Zombie*	newZombie(std::string name){
	Zombie *ret = new Zombie(name);
	return (ret);
}


