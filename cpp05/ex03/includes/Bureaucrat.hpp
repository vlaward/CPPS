/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:11:51 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/14 14:10:34 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iostream>


class AForm;
#include "AForm.hpp"
class Bureaucrat {
private:
	int					_grade;
	const std::string	_name;
public:	
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &to_cpy);
	Bureaucrat&	operator=(const Bureaucrat &to_cpy);
	~Bureaucrat();

	const std::string	getName() const;
	int	getGrade() const;
	void	changeGrade(int change);
	void	signForm(AForm & toSign);
	void	executeForm(AForm & toSign);

	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw();
		};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw();
		};
		
};

std::ostream& operator<<(std::ostream &os, const Bureaucrat &bubu);

#endif