/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 18:42:43 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/11 12:02:17 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <string>
# include "Character.hpp"
# include <iostream>
class AMateria
{
protected:
	std::string	type;
	AMateria();
public:
	AMateria(std::string const & type);
	AMateria(const AMateria &to_cpy);
	virtual const AMateria &operator=(const AMateria &to_cpy);
	virtual ~AMateria();
	
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif