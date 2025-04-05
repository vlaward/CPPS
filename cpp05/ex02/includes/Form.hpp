/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 11:38:03 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/05 11:38:09 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
# include <string>
# include <iostream>

class AForm;
# include "Bureaucrat.hpp"

class AForm {
private:
	const int			_gradeToSign;
	const int			_gradeToExec;
	const std::string	_name;
	bool				_isSigned = false;

public:	
	AForm(std::string name, int gradeToSign, int gradeToExec);
	AForm(const AForm &to_cpy);
	AForm&	operator=(const AForm &to_cpy);
	~AForm();

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

std::ostream& operator<<(std::ostream &os, const AForm &fofo);

#endif
