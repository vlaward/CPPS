/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 11:38:03 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/09 05:34:55 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
# include <string>
# include <iostream>

class Bureaucrat;
# include "Bureaucrat.hpp"

class AForm {
private:
	const int			_gradeToSign;
	const int			_gradeToExec;
	const std::string	_name;
	const std::string	_target;
	bool				_isSigned = false;
	virtual void	formExecute(Bureaucrat const & executor);
	
public:	
	AForm(std::string name, int gradeToSign, int gradeToExec);
	AForm(const AForm &to_cpy);
	AForm&	operator=(const AForm &to_cpy);
	virtual ~AForm();

	virtual const std::string	getName() const;
	virtual int		getGradeToSign() const;
	virtual int		getGradeToExec() const;
	virtual bool	isSigned() const;
	virtual	std::string	getTarget() const;
	
	virtual void	beSigned(Bureaucrat const &bubu);
	virtual void	execute(Bureaucrat const & executor);
	

	class FormNotSignedException : public std::exception {
		public:
			virtual const char* what() const throw();
		};
	
		class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw();
		};
	
		class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw();
		};
		
};



std::ostream& operator<<(std::ostream &os, const AForm &fofo);

#endif
