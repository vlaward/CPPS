/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardon.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 04:49:55 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/14 12:57:55 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardon.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : AForm("PresidentialPardonform", 24, 5, target){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &to_cpy) : AForm(to_cpy){
	*this = to_cpy;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void	PresidentialPardonForm::formExecute(){

	std::cout << this->getTarget() << "has been pardonned by Zaphod Beeblebrox." << std::endl;
}

