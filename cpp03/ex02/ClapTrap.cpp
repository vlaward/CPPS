/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:10:18 by ncrombez          #+#    #+#             */
/*   Updated: 2024/11/27 15:57:24 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string str) :
	name(str),
	hit_points(10),
	energy_points(10),
	attack_damage(0){
	
	std::cout << "ClapTrap " << name << " has been constructed" << std::endl;
}

ClapTrap::ClapTrap() :
	name("ClapTrap"),
	hit_points(10),
	energy_points(10),
	attack_damage(0){
	
	std::cout << "ClapTrap " << name << " has been constructed" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << name << " has been destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &to_cpy){*this = to_cpy;}

ClapTrap	&ClapTrap::operator=(const ClapTrap &to_cpy){
	if (this == &to_cpy)
		return (*this);
	this->name = to_cpy.name;
	this->hit_points = to_cpy.hit_points;
	this->energy_points = to_cpy.energy_points;
	this->attack_damage = to_cpy.attack_damage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target){
	this->energy_points--;
	std::cout << "ClapTrap " << this->name
	<< " attack " << target
	<< ", causing " << this->attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int ammount){
	this->hit_points -= ammount;
	if (this->hit_points <= 0){
		this->~ClapTrap();
		return ;
	}
	std::cout << "ClapTrap " << this->name
	<< " took " << ammount
	<< " damages and is now at " << this->hit_points
	<< " Hit Points !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int ammount){
	if (this->energy_points < 1){
		std::cout << "ClapTrap " << this->name
		<< "has no more energies TwT" << std::endl;
		return ;
	}
	this->hit_points += ammount;
	this->energy_points--;
	std::cout << "ClapTrap " << this->name
	<< " was repaired for " << ammount
	<< " Hit Points and is now at " << this->hit_points
	<< " Hit Points !" << std::endl;
}
