/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:20:22 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/20 16:16:22 by ncrombez         ###   ########.fr       */
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
	static const int	dist_comma = 8;
public:
	Fixed(void);
	Fixed(const Fixed &to_cpy);
	~Fixed();
	Fixed& operator=(const Fixed &to_cpy);

	int	getRawBits() const;
	void setRawBits(int const raw);
};

#endif