/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:25:40 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/09 18:09:58 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog(){
	std::cout << "Dog constructor called\n";
	this->type = "Dog";
	this->thoughs = new Brain();
}

Dog::~Dog(){
	std::cout << "Dog destructor called\n";
	delete(this->thoughs);
}

Dog&	Dog::operator=(const Dog &to_cpy){
	if (this == &to_cpy)
		return (*this);
	this->type = to_cpy.type;
	*this->thoughs = *to_cpy.thoughs;
	return (*this);
}


void	Dog::makeSound() const{std::cout << "🐶W00F🐶\n";}
