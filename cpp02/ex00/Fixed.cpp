/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:35:25 by ncrombez          #+#    #+#             */
/*   Updated: 2024/11/27 15:21:20 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	(void)dist_comma;
	this->integer = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &to_cpy){
	std::cout << "Copyconstructor called\n";
	*this  = to_cpy;
}


Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}

Fixed	&Fixed::operator=(Fixed &to_copy){
	std::cout << "Copy assignement called\n";
	if (this == &to_copy)
		return (*this);
	this->integer = to_copy.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(){
	std::cout << "getRawBits function Called\n";
	return (this->integer);
}
void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits function Called\n";
	this->integer = raw;
}
