/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:11:38 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/05 18:50:27 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){std::cout << "Animal constructor called\n";}

Animal::~Animal(){std::cout << "Animal destructor called\n";}

Animal::Animal(const Animal &to_cpy){*this = to_cpy;}

Animal&	Animal::operator=(const Animal &to_cpy){
	if (this == &to_cpy)
		return (*this);
	this->type = to_cpy.type;
	return (*this);
}

std::string	Animal::getType() const {return (this->type);}

void	Animal::makeSound() const {std::cout << "*Animal Sound CWARKAAAAARGh*\n";}
