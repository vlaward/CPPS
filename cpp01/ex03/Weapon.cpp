/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:54:25 by ncrombez          #+#    #+#             */
/*   Updated: 2024/11/18 12:04:21 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str) : type(str){
}

Weapon::~Weapon(void){
}

void	Weapon::setType(std::string str){
	this->type = str;
}


std::string &Weapon::getType(){
	return (this->type);
}
