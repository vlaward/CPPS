/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:21:29 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/04 10:50:21 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


//constructor'n shenanigans

AForm::AForm(std::string name, int gradeToSign, int gradeToExec) : _gradeToSign(gradeToSign), _gradeToExec(gradeToExec), _name(name){
	if (gradeToSign < 1 || gradeToExec < 1)
		throw AForm::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExec > 150)
		throw AForm::GradeTooLowException();
}

AForm::~AForm(){}

AForm::AForm(AForm const &to_cpy) :
_gradeToSign(to_cpy.getGradeToSign()),
_gradeToExec(to_cpy.getGradeToExec()),
_name(to_cpy.getName())
{
	*this = to_cpy;
}

AForm& AForm::operator=(const AForm &to_cpy){
	if (this != &to_cpy)
		_isSigned = to_cpy.isSigned();
	return (*this);
}


//Getters

const std::string	AForm::getName() const{ return _name;}
int		AForm::getGradeToSign() const{ return _gradeToSign;}
int		AForm::getGradeToExec() const{ return _gradeToExec;}
bool	AForm::isSigned() const{ return _isSigned;}


//usable


void	AForm::beSigned(Bureaucrat const &bubu){
	if (bubu.getGrade() > _gradeToSign){throw AForm::GradeTooLowException();}
	else
	_isSigned = true;
}


void	AForm::execute(Bureaucrat const & bubu)
{
	if (bubu.getGrade() > _gradeToExec)
		throw AForm::GradeTooLowException();
	else if (this->_isSigned == false)
		throw AForm::FormNotSignedException();
	else
		this->formExecute(bubu);
}

//exceptions

const char* AForm::GradeTooHighException::what() const throw(){
	return "Grade is too high!";
}

const char* AForm::GradeTooLowException::what() const throw(){
	return "Grade is too low!";
}

const char* AForm::FormNotSignedException::what() const throw(){
	return "Form is not signed!";
}


std::ostream& operator<<(std::ostream &os, const AForm &fofo){
	os << fofo.getName()  << ", AForm grade to Sign : " << fofo.getGradeToSign() << std::endl
	<< "AForm grade to Exec : " << fofo.getGradeToExec() << std::endl
	<< "Is Signed : " << fofo.isSigned() << std::endl;
	return os;}
