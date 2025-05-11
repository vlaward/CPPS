/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 00:23:14 by ncrombez          #+#    #+#             */
/*   Updated: 2025/05/12 00:38:49 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int i) : _size_max(i), _size(0){}

Span::~Span(){}

Span::Span(Span const & to_cpy) : _elems(to_cpy._elems), _size_max(to_cpy._size_max), _size(to_cpy._size){}//tester pour les elems

Span &	Span::operator=(Span const & to_cpy){
	if (this != &to_cpy){
		_elems =  to_cpy._elems;
		_size =  to_cpy._size;
		_size_max =  to_cpy._size_max;
	}
	return *this;
}

void	Span::addNumber(unsigned int i){
	if (_size >= _size_max)
		throw SpanFullException();
	_size++;
	_elems.push_back(i);
}

int	Span::longestSpan(){
	if (_size < 2)
		throw SpanToSmallException();
	std::stable_sort(_elems.begin(), _elems.end());
	return *(_elems.end() - 1) - *_elems.begin();
}

int	Span::shortestSpan(){
	if (_size < 2)
		throw SpanToSmallException();
	std::stable_sort(_elems.begin(), _elems.end());

	std::vector<int>::iterator	it = _elems.begin();
	it++;
	return *it - *_elems.begin();
}

void	Span::addSpan(std::vector<int>::iterator start, std::vector<int>::iterator finish){
	if (_size + start.base() - finish.base() > _size_max)
		throw SpanFullException();
	std::copy(start, finish, std::inserter(_elems,  _elems.end()));
}

std::vector<int>	Span::elemAccessor(){
	return _elems;
}

const char*	Span::SpanFullException::what() const throw(){
	return "No no no... The Span is full, you can't add that much values :(";
}

const char*	Span::SpanToSmallException::what() const throw(){
	return "There is not enought elements in the span for you to do that >n<";
}
