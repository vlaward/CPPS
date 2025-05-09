/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:11:51 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/21 02:18:56 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <string>
# include <iostream>
# include "AForm.hpp"
# include "RobotomyRequest.hpp"
# include "ShrubberyCreation.hpp"
# include "PresidentialPardon.hpp"

class Intern {
public:	
	Intern();
	Intern(const Intern &to_cpy);
	Intern&	operator=(const Intern &to_cpy);
	~Intern();

	AForm	*makeForm(std::string form, std::string target) const;

	AForm	*makePresidentialPardonForm(std::string target) const;
	AForm	*makeShurrberrryCreationForm(std::string target) const;
	AForm	*makeRobotomyRequestForm(std::string target) const;
};

#endif