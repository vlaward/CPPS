/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:28:41 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/05 18:48:43 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		const Animal* meta = new Animal();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;

		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete j; //should not create a leak
		delete i;
		delete meta;
	}
	{
		const WrongAnimal * cat = new WrongCat();
		
		cat->makeSound();
		delete cat;
	}
}