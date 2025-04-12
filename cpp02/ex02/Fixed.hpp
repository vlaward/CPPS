/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:20:22 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/09 05:17:25 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# ifndef IOSTREAM
#  include <iostream>
# endif
# ifndef CMATH
#  include <cmath>
# endif


class Fixed
{
private:
	int	integer;
	static const int	dist_comma = 8;
public:
	Fixed(void);
	Fixed(const int the_one);
	Fixed(const float the_one);
	Fixed(const Fixed &to_cpy);
	~Fixed();
	Fixed&	operator=(const Fixed &to_cpy);
	Fixed&	operator++();
	Fixed&	operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);
	bool operator==(const Fixed &fx) const;
	bool operator!=(const Fixed &fx) const;
	bool operator<(const Fixed &fx) const;
	bool operator>(const Fixed &fx) const;
	bool operator<=(const Fixed &fx) const;
	bool operator>=(const Fixed &fx) const;
	Fixed const	operator+(const Fixed &fx) const;
	Fixed const	operator-(const Fixed &fx) const;
	Fixed const	operator*(const Fixed &fx) const;
	Fixed const	operator/(const Fixed &fx) const;
	
	static Fixed	min(const Fixed &f1, const Fixed &f2);
	static Fixed	max(const Fixed &f1, const Fixed &f2);
	static Fixed	min(Fixed &f1, Fixed &f2);
	static Fixed	max(Fixed &f1, Fixed &f2);
	

	int	getRawBits()const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	
};

std::ostream& operator<<(std::ostream &os, const Fixed &fx);

#endif