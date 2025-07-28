/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequest.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 04:49:55 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/14 13:08:23 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequest.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm("RobotomyRequestform", 72, 45, target){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &to_cpy) : AForm(to_cpy){
	*this = to_cpy;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

void	RobotomyRequestForm::formExecute(){
	srand(time(0));
	std::cout << "* drilling noises *" << std::endl;
	if (rand() % 2)
		std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
	else
		std::cout << "Robotomization failed." << std::endl;
}

