/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:20:22 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/20 16:16:27 by ncrombez         ###   ########.fr       */
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
	~Fixed(void);
	Fixed& operator=(const Fixed &to_cpy);

	int	getRawBits()const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	
};

std::ostream& operator<<(std::ostream &os, const Fixed &fx);

#endif