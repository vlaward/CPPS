/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:25:34 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/04 11:43:28 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(){
{
	try{
		Bureaucrat bob("bob", 60);
		Bureaucrat marie("Marie", 150);

		std::cout << bob << std::endl;
		std::cout << marie << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException){
		std::cout << "ben c'est trop haut mon amis" << std::endl;}
	catch (Bureaucrat::GradeTooLowException){
		std::cout << "ben c'est trop bas mon amis" << std::endl;}
}
{
	try{
		Bureaucrat bob("BOB", 60);
		Bureaucrat marie("mARIE", 150);

		std::cout << bob << std::endl;
		bob.decrementGrade(50);
		std::cout << bob << std::endl;
		bob.incrementGrade(200);
		std::cout << bob << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException){
		std::cout << "ben c'est trop haut mon amis" << std::endl;}
	catch (Bureaucrat::GradeTooLowException){
		std::cout << "ben c'est trop bas mon amis" << std::endl;}
}
	return 0;
}