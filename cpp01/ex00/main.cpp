/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:23:20 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/09 16:17:50 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);


int	main(){
	Zombie	zombzomb("jhon");
	Zombie	*zomb_there;

	zombzomb.Announce();
	zomb_there = newZombie("ye m'apelle misell");
	zomb_there->Announce();
	randomChump("Y yo, miguel :D");
	delete(zomb_there);
}

