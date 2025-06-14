/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:31:51 by ncrombez          #+#    #+#             */
/*   Updated: 2025/05/09 18:13:18 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<class T>
class Array
{
private:
	int	_size;
	T	*_members;
public:
	Array();
	Array(unsigned int n);
	Array(Array const &to_cpy);
	Array &	operator=(Array const &to_cpy);
	~Array();

	T &		operator[](int n);
	class OutOfBoundsException : public std::exception {
		public:
			virtual const char*	what() const throw();
	};
};

# include "Array.tpp"
#endif