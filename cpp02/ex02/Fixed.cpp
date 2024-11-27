/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:35:25 by ncrombez          #+#    #+#             */
/*   Updated: 2024/11/27 15:18:17 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : integer(0) {
}

Fixed::Fixed(int const the_one){
	this->integer = the_one << dist_comma;
}

Fixed::Fixed(float const the_one){
	this->integer = (int)(roundf(the_one * (1 << this->dist_comma)));
}


Fixed::Fixed(const Fixed &to_cpy){
	this->integer = to_cpy.getRawBits();
}


Fixed::~Fixed(){
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

Fixed	&Fixed::operator=(const Fixed &to_copy){
	if (this == &to_copy)
		return (*this);
	*this = to_copy;
	return (*this);
}

Fixed	Fixed::min(const Fixed &f1, const Fixed &f2){
	if (f2.getRawBits() > f1.getRawBits())
		return f1;
	return f2;
}

Fixed	Fixed::max(const Fixed &f1, const Fixed &f2){
	if (f2.getRawBits() < f1.getRawBits())
		return f1;
	return f2;
}

Fixed	&Fixed::operator++(){
	this->integer++;
	return *this;
}

Fixed	&Fixed::operator--(){
	this->integer--;
	return *this;
}

Fixed	Fixed::operator++(int){
	Fixed	ret = *this;
	this->integer++;
	return ret;
}

Fixed	Fixed::operator--(int){
	Fixed	ret = *this;
	this->integer--;
	return ret;
}


Fixed const	Fixed::operator+(const Fixed &fx) const{
	return (Fixed(this->toFloat() + fx.toFloat()));
}
Fixed const	Fixed::operator-(const Fixed &fx) const{
	return (Fixed(this->toFloat() - fx.toFloat()));
}

Fixed const	Fixed::operator*(const Fixed &fx) const{
	return (Fixed(this->toFloat() * fx.toFloat()));
}

Fixed const	Fixed::operator/(const Fixed &fx) const{
	return (Fixed(this->toFloat() / fx.toFloat()));
}

std::ostream&	operator<<(std::ostream &os, const Fixed &fx){
	os << fx.toFloat();
	return os;	
}

bool	Fixed::operator==(const Fixed &fx){
	return (this->integer == fx.getRawBits());
}

bool	Fixed::operator!=(const Fixed &fx){
	return (this->integer != fx.getRawBits());
}

bool	Fixed::operator<(const Fixed &fx){
	return (this->integer < fx.getRawBits());
}

bool	Fixed::operator>(const Fixed &fx){
	return (this->integer > fx.getRawBits());
}

bool	Fixed::operator<=(const Fixed &fx){
	return (this->integer <= fx.getRawBits());
}

bool	Fixed::operator>=(const Fixed &fx){
	return (this->integer >= fx.getRawBits());
}
