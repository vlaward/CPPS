/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:01:34 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/09 16:01:36 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie{

private :
	std::string	name;

public :
	void	Announce(void);
	void	SetName(std::string name);

	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

};

Zombie*	zombieHorde(int N, std::string name);
