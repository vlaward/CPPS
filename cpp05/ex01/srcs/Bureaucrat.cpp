/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:21:29 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/04 11:39:02 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _grade(grade), _name(name){
	if (grade < 1){throw Bureaucrat::GradeTooHighException();}
	if (grade > 150){throw Bureaucrat::GradeTooLowException();}
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(Bureaucrat const &to_cpy) :
_grade(to_cpy.getGrade()), _name(to_cpy.getName())
{
	*this = to_cpy;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &to_cpy){
	if (this == &to_cpy)
		return (*this);
	this->_grade = to_cpy._grade;
	return (*this);
}

int	Bureaucrat::getGrade() const{ return _grade;}

const std::string	Bureaucrat::getName() const{ return _name;}

void	Bureaucrat::changeGrade(int change){
	int grade = _grade - change;
	if (grade < 1){throw Bureaucrat::GradeTooHighException();}
	else if (grade > 150){throw Bureaucrat::GradeTooLowException();}
	else {_grade = grade;}
}

void	Bureaucrat::signForm(Form toSign){
	try{
		toSign.beSigned(*this);
		std::cout << _name << " signed " << toSign.getName()
			<< ", new status is Signed : " << toSign.isSigned() <<std::endl;
	}
	catch (std::exception & e){
		std::cout << _name << " couldn't sign the form" << toSign.getName()
			<<", his grade was too low" << ", status is Signed : "
			<< toSign.isSigned() <<std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "Grade is too low!";
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &bubu){
	os << bubu.getName()  << ", bureaucrat grade " << bubu.getGrade();
	return os;}
