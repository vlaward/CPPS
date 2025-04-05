/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:21:29 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/04 10:50:21 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExec) : _gradeToSign(gradeToSign), _gradeToExec(gradeToExec), _name(name){
	if (gradeToSign < 1 || gradeToExec < 1){throw Form::GradeTooHighException();}
	if (gradeToSign > 150 || gradeToExec > 150){throw Form::GradeTooLowException();}
}

Form::~Form(){}

Form::Form(Form const &to_cpy) :
_gradeToSign(to_cpy.getGradeToSign()),
_gradeToExec(to_cpy.getGradeToExec()),
_name(to_cpy.getName())
{
	*this = to_cpy;
}

Form& Form::operator=(const Form &to_cpy){
	if (this != &to_cpy)
		_isSigned = to_cpy.isSigned();
	return (*this);
}

const std::string	Form::getName() const{ return _name;}

int		Form::getGradeToSign() const{ return _gradeToSign;}
int		Form::getGradeToExec() const{ return _gradeToExec;}
bool	Form::isSigned() const{ return _isSigned;}

void	Form::beSigned(Bureaucrat const &bubu){
	if (bubu.getGrade() > _gradeToSign){throw Form::GradeTooLowException();}
	else
	_isSigned = true;
}



const char* Form::GradeTooHighException::what() const throw(){
	return "Grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw(){
	return "Grade is too low!";
}

std::ostream& operator<<(std::ostream &os, const Form &fofo){
	os << fofo.getName()  << ", Form grade to Sign : " << fofo.getGradeToSign() << std::endl
	<< "Form grade to Exec : " << fofo.getGradeToExec() << std::endl
	<< "Is Signed : " << fofo.isSigned() << std::endl;
	return os;}
