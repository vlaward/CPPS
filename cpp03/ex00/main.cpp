/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:51:04 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/20 16:23:44 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(){
	ClapTrap milady("milady");
	ClapTrap no_u;
	ClapTrap &refe = milady;

	milady.attack("someone");
	milady.takeDamage(0);
	milady.takeDamage(5);
	milady.beRepaired(25);
	no_u.attack("milady");
	refe.takeDamage(0);
	(void)refe;
	no_u = milady;
	no_u.takeDamage(0);
}