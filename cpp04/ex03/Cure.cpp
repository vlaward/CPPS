/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:26:29 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/11 12:27:57 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(){
	std::cout << "Cure constructor called" << std::endl;
	this->type = "Cure";
}	

void	Cure::use(ICharacter &target){
	std::cout << "* heals " << target.getName() << "'s wonds *" << std::endl;
}

AMateria *Cure::clone() const{return (new Cure());}

const Cure &Cure::operator=(const Cure &to_cpy){
	if (this == &to_cpy)
		return (*this);
	this->type = to_cpy.type;
	return (*this);
}
