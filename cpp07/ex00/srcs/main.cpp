/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 21:18:02 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/26 21:27:51 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include "Plate.hpp"



int main(){
	int	a = 45, b = 7;

	char	ca = 'b', cb = 'a';

	std::string	sa = "hallo", sb = "ballo";

	std::cout << "this is int a : " << a << "and b" << b << std::endl;
	std::cout << "this is int max : " << max(a, b) << std::endl;
	std::cout << "this is int min : " << min(a, b) << std::endl;
	swap(a, b);
	std::cout << "this is int a : " << a << "and b" << b << std::endl;

	std::cout << "this is char a : " << ca << "and b" << cb << std::endl;
	std::cout << "this is char max : " << max(ca, cb) << std::endl;
	std::cout << "this is char min : " << min(ca, cb) << std::endl;
	swap(ca, cb);
	std::cout << "this is char a : " << ca << "and b" << cb << std::endl;

	std::cout << "this is string a : " << sa << "and b" << sb << std::endl;
	std::cout << "this is string max : " << max(sa, sb) << std::endl;
	std::cout << "this is string min : " << min(sa, sb) << std::endl;
	swap(sa, sb);
	std::cout << "this is string a : " << sa << "and b" << sb << std::endl;
}