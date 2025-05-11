/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 18:09:38 by ncrombez          #+#    #+#             */
/*   Updated: 2025/05/11 19:34:28 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Array.hpp"

//constructors, copies and destructors :

template<class T>
Array<T>::Array() : _size(0), _members(new T[0]){}

template<class T>
Array<T>::Array(unsigned int n) : _size(n){
	_members = new T[n];
	for (unsigned int i = 0 ; i < n; i++)
		_members[i] = 0;
}
template<class T>
Array<T>::~Array(){
	delete [] _members;
}

template<class T>
Array<T>::Array(Array const &to_cpy) : _members(NULL){	
	*this = to_cpy;
}

template<class T>
Array<T> &	Array<T>::operator=(Array<T> const &to_cpy){
	if (this == &to_cpy)
		return *this;
	if (_members)
		delete [] _members;
	_members = new T[to_cpy._size];
	_size = to_cpy._size;
	for (int i = 0 ; i < to_cpy._size ; i++)
		_members[i] = to_cpy._members[i];
	return *this;
}

//accessors

template<class T>
T &		Array<T>::operator[](int n){
	if (n < 0 || n > _size - 1)
		throw Array::OutOfBoundsException();
	return _members[n];
}

//exceptions :

template<class T>
const char*	Array<T>::OutOfBoundsException::what() const throw()
{
	return ("Given index is out of array bounds.");
}