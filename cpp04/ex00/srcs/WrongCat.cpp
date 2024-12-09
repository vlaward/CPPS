/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:24:22 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/05 18:52:20 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
	this->type = "WrongCat";
	std::cout << "WrongCat constructor called\n";
}

WrongCat::~WrongCat(){std::cout << "WrongCat destructors called\n";}

void	WrongCat::makeSound()  const {std::cout << "Wrong MEEEEEEEOW :3\n";}
