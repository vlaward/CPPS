/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:28:21 by ncrombez          #+#    #+#             */
/*   Updated: 2024/11/19 17:01:03 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void	Harl::complain(std::string level){
	void	(Harl::*debug)() = &Harl::debug;
	void	(Harl::*info)() = &Harl::info;
	void	(Harl::*warning)() = &Harl::warning;
	void	(Harl::*error)() = &Harl::error;

	void (Harl::*complain[4])() = {debug, info, warning, error};

	std::string	levels[4] = {"debug", "info", "warning", "error"};

	for (int i = 0 ; i < 4 ; i++)
		if (level == levels[i])
			(this->*complain[i])();
}

void	Harl::debug(){
	std::cout << "Alors, pour ta gouverne, la valeur de i c'est 4. T'en fait ce que tu veux <3\n";
}

void	Harl::info(){
	std::cout << "FLASH INFO :\n -la valeur de i a un impacte MAJEUR sur l'ecosystem terrien, il faut la reguler a tout prix!! \n";
}

void	Harl::warning(){
	std::cout << "ATTENTION : la valeur de i a augmenter, a ce rythme ca ne seras pas que les especes rare qui cont s'eteindre\n";	
}

void	Harl::error(){
	std::cout << "ERROR 404 : Life not found\n";
}

