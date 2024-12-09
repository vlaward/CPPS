/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:05:19 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/05 18:49:19 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP
# ifndef STRING
#  include <string>
# endif
# include "Animal.hpp"

class Cat : public Animal{
public:
	Cat();
	~Cat();

	void makeSound() const;
};


#endif