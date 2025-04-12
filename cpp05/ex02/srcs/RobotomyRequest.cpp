/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequest.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 04:49:55 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/09 05:29:35 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequest.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm("RobotomyRequestform", 72, 45){
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &to_cpy) : AForm(src){
	*this = src;
}

RobotomyRequestForm::RobotomyRequestForm&	operator=(const RobotomyRequestForm &to_cpy){
	if (this != &to_cpy){
		this->_isSigned = to_cpy.isSigned();
		this->_isSigned = to_cpy.getTarget();
	}
	return (*this);
	

}

RobotomyRequestForm::~RobotomyRequestForm(){}

std::string	RobotomyRequestForm::getTarget(){
	return (this->_target);
}


void	RobotomyRequestForm::formExecute(Bureaucrat const & bubu){
	std::cout << "* drilling noises *" << std::endl;
	if (rand() % 2)
		std::cout << this->_target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "Robotomization failed." << std::endl;
}

