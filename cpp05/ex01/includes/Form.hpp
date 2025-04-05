/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:11:51 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/04 10:47:44 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include <iostream>

class Form;
# include "Bureaucrat.hpp"

class Form {
private:
	const int			_gradeToSign;
	const int			_gradeToExec;
	const std::string	_name;
	bool				_isSigned = false;

public:	
	Form(std::string name, int gradeToSign, int gradeToExec);
	Form(const Form &to_cpy);
	Form&	operator=(const Form &to_cpy);
	~Form();

	const std::string	getName() const;
	void	beSigned(Bureaucrat const &bubu);
	int		getGradeToSign() const;
	int		getGradeToExec() const;
	bool	isSigned() const; 

	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw();
		};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw();
		};
		
};

std::ostream& operator<<(std::ostream &os, const Form &fofo);

#endif
