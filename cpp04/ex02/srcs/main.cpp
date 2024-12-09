/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:28:41 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/09 18:37:15 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;

		i->makeSound(); //will output the cat sound!
		j->makeSound();

		delete j; //should not create a leak
		delete i;
	}
	//Decommenter si dessous pour se rendre compte que on ne peu pas initialiser un Animal
	// {
	// 	const Animal* meta = new Animal();
	// 	std::cout << "ceci ne doit pas s'afficher dans l'idee" << std::endl;
	// 	meta->makeSound();
	// 	delete meta;
	// }
}