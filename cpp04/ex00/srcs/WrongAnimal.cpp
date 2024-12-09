/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:11:38 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/05 18:50:37 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){std::cout << "WrongAnimal constructor called\n";}

WrongAnimal::~WrongAnimal(){std::cout << "WrongAnimal destructor called\n";}

WrongAnimal::WrongAnimal(const WrongAnimal &to_cpy){*this = to_cpy;}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &to_cpy){
	if (this == &to_cpy)
		return (*this);
	this->type = to_cpy.type;
	return (*this);
}

std::string	WrongAnimal::getType()const {return (this->type);}

void	WrongAnimal::makeSound() const {std::cout << "*WrongAnimal Sound CWARKAAAAARGh*\n";}
