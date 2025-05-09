/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Plate.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:54:18 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/29 08:44:31 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLATE_HPP
# define PLATE_HPP

# include <string>

template<typename T>
void	swap(T &a, T &b){
	T	&tmp = b;

	b = a;
	a = tmp;
}

template<typename T>
T	&max(T &a, T &b){
	return a > b ? a : b;
}

template<typename T>
T	&min(T &a, T &b){
	return a < b ? a : b;
}

template<typename T>
void	iter(T *addr, unsigned int size,void (* function)(T &elem)){
	while (size-- != 0){
		function(addr[size]);
	}
}

#endif
