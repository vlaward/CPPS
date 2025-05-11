/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 00:53:35 by ncrombez          #+#    #+#             */
/*   Updated: 2025/05/12 01:24:45 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>

template<class T>
class MutantStack : public std::stack<T> {
public :
	typedef typename std::stack<T>::container_type::iterator	iterator;
	iterator	begin();
	iterator 	end();
};

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(){
	return	this->c.begin();
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(){
	return	this->c.end();
}

#endif