/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:05:19 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/09 17:00:09 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal{
private:
	Brain	*thoughs;
public:
	Cat();
	~Cat();
	Cat&	operator=(const Cat &to_cpy);

	void makeSound() const;
};


#endif