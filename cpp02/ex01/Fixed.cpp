/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:35:25 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/20 16:32:24 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : integer(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(int const the_one){
	std::cout << "Int constructor called\n";
	this->integer = the_one << dist_comma;
}

Fixed::Fixed(float const the_one){
	std::cout << "Float constructor called\n";
	this->integer = (int)(roundf(the_one * (1 << this->dist_comma)));
}


Fixed::Fixed(const Fixed &to_cpy){
	std::cout << "Copyconstructor called\n";
	*this = to_cpy;
}


Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}

Fixed	&Fixed::operator=(const Fixed &to_copy){
	std::cout << "Copy assignement called\n";
	if (this == &to_copy)
		return (*this);
	this->integer = to_copy.integer;
	return (*this);
}

int	Fixed::getRawBits() const{
	return (this->integer);
}

void Fixed::setRawBits(int const raw){
	this->integer = raw;
}

int	Fixed::toInt() const{
	return ((int)(this->integer/(1 << this->dist_comma)));
}

float	Fixed::toFloat() const{
	return ((float)this->integer/(1 << this->dist_comma ));
}

std::ostream&	operator<<(std::ostream &os, const Fixed &fx){
	os << fx.toFloat();
	return os;	
}
