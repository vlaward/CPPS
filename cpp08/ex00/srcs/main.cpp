/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 19:17:19 by ncrombez          #+#    #+#             */
/*   Updated: 2025/05/12 00:30:42 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyFind.hpp"
#include <algorithm>
#include <list>
#include <vector>
#include <deque>


int main(){
	int					test[] = {1,2,3,4};
	std::vector<int>	veste(test, test + sizeof(test) / sizeof(int) );
	std::deque<int>		dest(test, test + sizeof(test) / sizeof(int) );
	std::list<int>		leste(test, test + sizeof(test) / sizeof(int) );
	
	
	std::cout << "Vector exemple :" << std::endl
		<< '\t' << easyfind(veste, 3).base() << std::endl
		<< '\t' << *easyfind(veste, 3) << std::endl;
	std::cout << "  When not in the container :" << std::endl
		<< '\t' << "  " << easyfind(veste, 7).base() << std::endl
		<< '\t' << "  " << *easyfind(veste, 7) << std::endl;
	std::cout << std::endl << std::endl;

	std::cout << "Deque exemple :" << std::endl
		<< '\t' << easyfind(dest, 3)._M_node << std::endl
		<< '\t' << *easyfind(dest, 3) << std::endl;
	std::cout << "  When not in the container :" << std::endl
		<< '\t' << "  " << easyfind(dest, 7)._M_node << std::endl
		<< '\t' << "  " << *easyfind(dest, 7) << std::endl;
	std::cout << std::endl << std::endl;
	
	std::cout << "List exemple :" << std::endl
		<< '\t' << easyfind(leste, 3)._M_node << std::endl
		<< '\t' << *easyfind(leste, 3) << std::endl;
	std::cout << "  When not in the container :" << std::endl
		<< '\t' << "  " << easyfind(leste, 7)._M_node << std::endl
		<< '\t' << "  " << *easyfind(leste, 7) << std::endl;

	return 0;
}