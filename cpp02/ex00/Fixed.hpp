/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:20:22 by ncrombez          #+#    #+#             */
/*   Updated: 2024/11/27 15:21:17 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# ifndef IOSTREAM
#  include <iostream>
# endif


class Fixed
{
private:
	int	integer;
	const int	dist_comma = 8;
public:
	Fixed(void);
	Fixed(const Fixed &to_cpy);
	~Fixed(void);
	Fixed& operator=(Fixed &to_cpy);

	int	getRawBits();
	void setRawBits(int const raw);
};

#endif