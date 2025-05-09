/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:21:29 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/21 02:48:40 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
}

Intern::~Intern(){}

Intern::Intern(Intern const &to_cpy){*this = to_cpy;}

Intern& Intern::operator=(const Intern &to_cpy){
	(void)to_cpy;
	return (*this);}

AForm	*Intern::makeForm(std::string form, std::string target) const{
	AForm	* (Intern::*funk[3])(std::string target) const = {&Intern::makePresidentialPardonForm, &Intern::makeShurrberrryCreationForm , &Intern::makeRobotomyRequestForm};
	std::string	formsNames[3] = {"presidential pardon", "shrubbery creation", "robotomy request"};

	for (int i = 0 ; i < 3 ; i++)
	{
		if (formsNames[i] == form){
			std::cout << "Intern Createe form : " << form << std::endl;
			return (this->*funk[i])(target);
		}
	}
	std::cout << "Intern couldn't Createe form : " << form << ", since this form doesn't exist"<< std::endl;
	return NULL;
}

AForm	*Intern::makePresidentialPardonForm(std::string target) const {
	return new PresidentialPardonForm(target);
}
AForm	*Intern::makeShurrberrryCreationForm(std::string target) const {
	return new ShrubberyCreationForm(target);
}
AForm	*Intern::makeRobotomyRequestForm(std::string target) const {
	return new RobotomyRequestForm(target);
}
