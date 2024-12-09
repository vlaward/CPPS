/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:05:38 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/09 17:00:21 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal{
private:
	Brain	*thoughs;
	
public:
	Dog();
	~Dog();
	Dog&	operator=(const Dog &to_cpy);
	
	void makeSound() const;
};


#endif