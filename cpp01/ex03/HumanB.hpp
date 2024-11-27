/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:54:13 by ncrombez          #+#    #+#             */
/*   Updated: 2024/11/18 12:05:43 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# ifndef STRING_H
#  include <string>
# endif
# ifndef WEAPON_HPP
#  include "Weapon.hpp"
# endif

class HumanB{

private :
	std::string	name;
	Weapon		*weapon;

public :
	HumanB(std::string name);
	~HumanB(void);

	void	attack();
	void	setWeapon(Weapon &Weapon);
};
#endif
