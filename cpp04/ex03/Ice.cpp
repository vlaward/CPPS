/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 19:44:20 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/09 19:55:42 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(){
	std::cout << "Ice constructor called" << std::endl;
	this->type = "ice";
}	

void	Ice::use(ICharacter &target){
	std::cout << "*shots an ice bolte at " << target.getName() << "*" << std::endl;
}

AMateria *Ice::clone() const{return (new Ice());}

const Ice &Ice::operator=(const Ice &to_cpy){
	if (this == &to_cpy)
		return (*this);
	this->type = to_cpy.type;
	return (*this);
}
