/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:57:28 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/09 05:17:25 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# ifndef STRING
#  include <string>
# endif
# ifndef IOSTREAM
#  include <iostream>
# endif
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
private:

public:

	ScavTrap(std::string str);
	ScavTrap();
	~ScavTrap();
	ScavTrap(const ScavTrap &to_cpy);

	void	GuardGate();
};

#endif
