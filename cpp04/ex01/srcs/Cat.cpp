/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:24:22 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/09 18:09:47 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Cat constructor called\n";
	this->type = "Cat";
	this->thoughs = new Brain();
}

Cat::~Cat(){
	std::cout << "Cat destructor called\n";
	delete(this->thoughs);
}

Cat&	Cat::operator=(const Cat &to_cpy){
	if (this == &to_cpy)
		return (*this);
	this->type = to_cpy.type;
	*this->thoughs = *to_cpy.thoughs;
	return (*this);
}


void	Cat::makeSound() const {std::cout << "MEEEEEEEOW :3\n";}
