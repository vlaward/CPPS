/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:28:41 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/09 18:27:16 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal	*tabl[4];

	Cat	chaton;
	Dog	potichien;
	Cat	shrodinger;
	Dog laika;

	for (int i = 0 ; i < 4 ; i++){
		if (i % 2)
			tabl[i] = new Cat();
		else
			tabl[i] = new Dog();
	}
	for (int i = 0 ; i < 4 ; i++){
		delete (tabl[i]);
	}

	std::cout << "\n\n\n\n\n\n";

	shrodinger = chaton;
	 laika = potichien;	
}