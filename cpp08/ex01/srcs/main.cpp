/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 23:43:27 by ncrombez          #+#    #+#             */
/*   Updated: 2025/05/12 00:40:30 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include "Span.hpp"

template<class T>
void	vectorPrint(T myvector){
	std::cout << "myvector contains:";
  for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';
}

int	main()
{
	int 				test[] = {32,71,12,45,26,80,53,33};
	std::vector<int>	vec(test,  test + sizeof(test) / sizeof(int));
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	vectorPrint(sp.elemAccessor());
	std::cout << sp.longestSpan() << std::endl;
	vectorPrint(sp.elemAccessor());

	sp.addSpan(vec.begin(), vec.end());
	std::cout << sp.shortestSpan() << std::endl;
	vectorPrint(sp.elemAccessor());
	std::cout << sp.longestSpan() << std::endl;
	vectorPrint(sp.elemAccessor());
	return 0;
}
