/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 11:38:03 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/14 14:07:51 by ncrombez         ###   ########.fr       */
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
	std::string	_target;
	bool				_isSigned = false;	
protected:
	virtual void	formExecute(void) = 0;
public:

	AForm(std::string name, int gradeToSign, int gradeToExec, std::string const &target);
	AForm(const AForm &to_cpy);
	AForm&	operator=(const AForm &to_cpy);
	virtual ~AForm(void);
	
	void	beSigned(Bureaucrat const &bubu);
	void	execute(Bureaucrat const & executor);


	const std::string	getName() const;
	const std::string	getTarget() const;
	int		getGradeToSign() const;
	int		getGradeToExec() const;
	bool	isSigned() const;

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
