/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 03:07:55 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/24 03:40:39 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Base.hpp" 
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void	identify(Base * to_identify){
	if (dynamic_cast<A*>(to_identify)){
		std::cout << "Congratulation it's an A type " << std::endl;
	}
	else if (dynamic_cast<B*>(to_identify)){
		std::cout << "Congratulation it's an B type " << std::endl;
	}
	else if (dynamic_cast<C*>(to_identify)){
		std::cout << "Congratulation it's an C type " << std::endl;
	}
}

void	identify(Base & to_identify){
	try {
		(void)dynamic_cast<A&>(to_identify);
		std::cout << "Congratulation it's an A type " << std::endl;
		return;
	}
	catch (const std::exception & e){}
	try {
		(void)dynamic_cast<B&>(to_identify);
		std::cout << "Congratulation it's an B type " << std::endl;
		return;
	}
	catch (const std::exception & e){}
	try {
		(void)dynamic_cast<C&>(to_identify);
		std::cout << "Congratulation it's an C type " << std::endl;
		return;
	}
	catch (const std::exception & e){}
}

Base	*generate(void){
	srand(time(0));
	int n = rand() % 3;

	if ( n == 1){return new A();}
	if ( n == 2){return new B();}
	if ( n == 0){return new C();}
	return NULL;
}

int	main(){
	Base	*a = generate();

	identify(a);
	identify(*a);
	return 0;
}