/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardon.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 04:49:55 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/09 05:04:55 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardon.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : AForm("PresidentialPardonform", 24, 5){
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &to_cpy) : AForm(src){
	*this = src;
}

PresidentialPardonForm::PresidentialPardonForm&	operator=(const PresidentialPardonForm &to_cpy){
	if (this != &to_cpy){
		this->_isSigned = to_cpy.isSigned();
		this->_isSigned = to_cpy.getTarget();
	}
	return (*this);
	

}

PresidentialPardonForm::~PresidentialPardonForm(){}

std::string	PresidentialPardonForm::getTarget(){
	return (this->_target);
}


void	PresidentialPardonForm::formExecute(Bureaucrat const & bubu){

	std::cout << this->_target << "has been pardonned by Zaphod Beeblebrox." << std::endl;
}

