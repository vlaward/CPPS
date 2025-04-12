/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:47:52 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/09 05:17:25 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>

class Animal {
protected:
	std::string type;
	Animal();

public:
	Animal(const Animal &to_cpy);
	Animal&	operator=(const Animal &to_cpy);
	virtual ~Animal();

	std::string getType() const ;
	virtual void	makeSound() const;
};


#endif