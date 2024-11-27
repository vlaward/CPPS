/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:23:54 by ncrombez          #+#    #+#             */
/*   Updated: 2024/11/19 16:25:58 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie{

private :
	std::string	name;

public :
	void	Announce(void);
	Zombie(std::string name);
	~Zombie(void);

};

