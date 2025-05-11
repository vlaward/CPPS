/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 22:37:28 by ncrombez          #+#    #+#             */
/*   Updated: 2025/05/12 00:37:12 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <algorithm>

class Span
{
private:
	std::vector<int>		_elems;
	unsigned int	_size_max;
	unsigned int	_size;
public:
	Span(unsigned int i);
	Span(Span const & to_cpy);
	Span & operator=(Span const & to_cpy);
	~Span();

	void	addNumber(unsigned int i);
	void	addSpan(std::vector<int>::iterator start, std::vector<int>::iterator finish);
	int		shortestSpan();
	int		longestSpan();

	std::vector<int>	elemAccessor();

	class SpanFullException : public std::exception {
		public:
			virtual const char*	what() const throw();
	};

	class SpanToSmallException : public std::exception {
		public:
			virtual const char*	what() const throw();
	};

};

#endif
