/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:54:25 by ncrombez          #+#    #+#             */
/*   Updated: 2024/11/18 12:27:19 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str) : name(str){
}

HumanB::~HumanB(void){
}

void	HumanB::attack(){
	std::cout << this->name << " attacked with their " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &Weapon){
	this->weapon = &Weapon;
}