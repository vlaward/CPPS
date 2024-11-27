/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:54:25 by ncrombez          #+#    #+#             */
/*   Updated: 2024/11/18 11:56:12 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &weapon) : name(str), weapon(weapon){
}

HumanA::~HumanA(void){
}

void	HumanA::attack(){
	std::cout << this->name << " attacked with their " << this->weapon.getType() << std::endl;
}
