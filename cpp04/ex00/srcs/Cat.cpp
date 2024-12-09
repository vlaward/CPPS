/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:24:22 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/05 18:52:01 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	this->type = "Cat";
	std::cout << "Cat constructor called\n";
}

Cat::~Cat(){std::cout << "Cat destructor called\n";}

void	Cat::makeSound() const {std::cout << "MEEEEEEEOW :3\n";}
