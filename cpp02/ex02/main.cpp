/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:48:05 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/20 16:31:05 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>



// int	main()
// {
// 	Fixed a;
// 	Fixed b( 10 );
// 	Fixed c (42.42f);
	
// 	a.setRawBits(42);
	
// 	std::cout << a << std::endl;
// 	std::cout << b.getRawBits() << std::endl;
// 	b = a;
// 	std::cout << b.getRawBits() << std::endl;
// 	std::cout << c.getRawBits() << std::endl;
	
// 	return (0);
// }

int main( void ) {
	{
		Fixed a;

		Fixed const b( Fixed( 5.05f ));
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	{
		Fixed a;
		Fixed const b( 10 );
		Fixed const c( 42.42f );
		Fixed const d( b );
		
		a = Fixed( 1234.4321f );
		
		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << (b + c).toFloat() << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "d is " << (d * b).toFloat() << std::endl;
		
		std::cout << "a is " << a.toInt() << " as integer" << std::endl;
		std::cout << "b is " << b.toInt() << " as integer" << std::endl;
		std::cout << "c is " << c.toInt() << " as integer" << std::endl;
		std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	}
	return 0;
}

