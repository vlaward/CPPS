/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 19:31:48 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/11 12:21:33 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
#include "AMateria.hpp"

class Ice  : public AMateria
{
public:
	Ice();
	~Ice();
	const Ice &operator=(const Ice &to_cpy);

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif