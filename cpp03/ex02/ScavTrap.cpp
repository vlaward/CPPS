/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:10:18 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/03 16:23:51 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string str) : ClapTrap(){
	std::cout << "ScavTrap " << str << " has been constructed" << std::endl;
	this->name = str;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap() : ClapTrap(){
	std::cout << "Default ScavTrap has been constructed" << std::endl;
	this->name = "ScavTrap";
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << name << " has been destroyed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &to_cpy){
	std::cout << "ScavTrap " << name << " has been copied" << std::endl;
	*this = to_cpy;
}

void	ScavTrap::GuardGate(){
	if (this->hit_points <= 0){
		std::cout << this->name
		<< "is basically dead TwT can't Guard" << std::endl;
		return ;
	}
	std::cout << this->name << "is not in Gate keeper mode" << std::endl;
}