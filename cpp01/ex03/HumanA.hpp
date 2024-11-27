/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:54:13 by ncrombez          #+#    #+#             */
/*   Updated: 2024/11/18 11:57:12 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# ifndef STRING_H
#  include <string>
# endif
# ifndef WEAPON_HPP
#  include "Weapon.hpp"
# endif

class HumanA{

private :
	std::string	name;
	Weapon		&weapon;

public :
	HumanA(std::string str, Weapon &weapon);
	~HumanA(void);

	void	attack();
};
#endif
