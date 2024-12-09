/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:25:40 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/05 18:51:45 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog(){
	this->type = "Dog";
	std::cout << "Dog constructor called\n";
}

Dog::~Dog(){std::cout << "Dog destructor called\n";}

void	Dog::makeSound() const{std::cout << "🐶W00F🐶\n";}
