/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:31:58 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/09 05:17:25 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICE_HPP
# define ICE_HPP
#include "AMateria.hpp"

class Cure  : public AMateria
{
public:
	Cure();
	~Cure();
	const Cure &operator=(const Cure &to_cpy);

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif