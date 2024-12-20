/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:01:28 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/09 16:02:05 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);


int	main(){
	Zombie	*zomb_there = zombieHorde(4, "pablo");

	for (int i = 0 ; i < 4 ; i++)
		zomb_there[i].Announce();
	delete[] zomb_there;
	return 1;
}

