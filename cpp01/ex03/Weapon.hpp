/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:54:13 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/09 05:17:25 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# ifndef STRING_H
# include <string>
# endif
# ifndef IOSTRAM_H
#  include <iostream>
# endif

class Weapon{

private :
	std::string type;

public :
	Weapon(std::string type);
	~Weapon();

	std::string &getType();
	void	setType(std::string strs);
};
# endif
