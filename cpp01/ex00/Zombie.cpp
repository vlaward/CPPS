/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:12:47 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/09 15:53:00 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string str) : name(str){
}

Zombie::~Zombie(){
	std::cout << this->name << " : No more braaaaaaainzzzzzzzzzzz...." << std::endl;
}

void	Zombie::Announce(void){
	std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void	randomChump(std::string name){
	Zombie tmp(name);

	tmp.Announce(); 
}

Zombie*	newZombie(std::string name){
	Zombie *ret = new Zombie(name);
	return (ret);
}
