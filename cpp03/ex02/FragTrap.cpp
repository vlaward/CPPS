/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:10:18 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/05 17:46:57 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string str) : ClapTrap(){
	std::cout << "FragTrap " << str << " has been constructed" << std::endl;
	this->name = str;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

FragTrap::FragTrap() : ClapTrap(){
	std::cout << "Default FragTrap has been constructed" << std::endl;
	this->name = "FragTrap";
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << name << " has been destroyed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &to_cpy){
	std::cout << "FragTrap " << name << " has been copied" << std::endl;
	*this = to_cpy;
}

void	FragTrap::highFiveGuys	(){
	if (this->hit_points <= 0){
		std::cout << this->name
		<< "is basically dead TwT can't HighFive" << std::endl;
		return ;
	}
	std::cout << this->name << "Wants evryone to high fiv :D" << std::endl;
}