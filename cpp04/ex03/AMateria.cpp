/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 19:27:48 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/09 19:40:24 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){std::cout << "Materia default Constructor called" << std::endl;}

AMateria::~AMateria(){std::cout << "Materia Constructor called" << std::endl;}

AMateria::AMateria(const AMateria &to_cpy){*this = to_cpy;}

AMateria::AMateria(const std::string &type){
	std::cout << "Materia string Constructor called" << std::endl;
	if (!type.compare("Ice"))
		this = ();
	if (!type.compare("Cure"))
		this = ();
}

const AMateria &AMateria::operator=(const AMateria &to_cpy){
	if (this == &to_cpy)
		return (*this);
	this->type = to_cpy.type;
	return (*this);
}
	

std::string const &AMateria::getType() const{return (this->type);}
