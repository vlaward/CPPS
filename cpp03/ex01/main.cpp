/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:51:04 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/03 16:36:58 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(){
	ScavTrap milady("milady");
	ScavTrap no_u;
	ScavTrap &refe = milady;
	

	milady.attack("someone");
	milady.takeDamage(0);
	milady.takeDamage(5);
	milady.beRepaired(25);
	no_u.attack("milady");
	refe.takeDamage(0);
	no_u = milady;
	no_u.GuardGate();
	(void)refe;
	no_u.takeDamage(0);
}