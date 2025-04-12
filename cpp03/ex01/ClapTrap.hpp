/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:57:28 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/09 05:17:25 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# ifndef STRING
#  include <string>
# endif
# ifndef IOSTREAM
#  include <iostream>
# endif

class ClapTrap{
protected:
	std::string name;
	int	hit_points;
	int	energy_points;
	int	attack_damage;

public:

	ClapTrap(std::string str);
	ClapTrap();
	~ClapTrap();
	ClapTrap(const ClapTrap &to_cpy);
	ClapTrap&	operator=(const ClapTrap &to_cpy);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int ammount);
	void	beRepaired(unsigned int ammount);
};

#endif
