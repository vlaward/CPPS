/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 06:42:57 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/21 06:54:55 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(int value) : _value(value){std::cout << "created data with value : " << value << std::endl;}


Data &Data::operator=(Data const &to_cpy){
	if (this == &to_cpy)
		return (*this);
	_value = to_cpy._value;
	return (*this);
}

Data::Data(Data const &to_cpy) : _value(to_cpy.getValue()){std::cout << "created data by copy with value : " << _value << std::endl;}

Data::~Data(){std::cout << "Data destructor called"<< std::endl;}

int	Data::getValue() const{return _value;}

std::ostream &operator<<(std::ostream &os, const Data &dada){
	os << "Data(" << dada.getValue() << ')' << std::endl;
	return (os);
}