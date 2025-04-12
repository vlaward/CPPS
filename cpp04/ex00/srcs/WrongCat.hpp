/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:06:10 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/09 05:17:25 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# ifndef STRING
#  include <string>
# endif
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public:
	WrongCat();
	~WrongCat();
	
	void makeSound() const;
};


#endif