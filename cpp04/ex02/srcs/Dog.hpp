/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:05:38 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/05 18:49:29 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP
# ifndef STRING
#  include <string>
# endif
# include "Animal.hpp"

class Dog : public Animal{
public:
	Dog();
	~Dog();
	
	void makeSound() const;
};


#endif