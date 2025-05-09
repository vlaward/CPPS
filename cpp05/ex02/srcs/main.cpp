/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:25:34 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/14 14:11:31 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreation.hpp"

int	main(){
{
	try{
		Bureaucrat bob("bob", 60);
		Bureaucrat marie("Marie", 150);
		ShrubberyCreationForm 		shrub("PATABOOM");

		std::cout << bob << std::endl;
		std::cout << marie << std::endl;
		std::cout << shrub << std::endl;
		marie.signForm(shrub);
		bob.signForm(shrub);
		bob.executeForm(shrub);
		
		
	}
	catch (Bureaucrat::GradeTooHighException){
		std::cout << "ben c'est trop haut mon amis" << std::endl;}
	catch (Bureaucrat::GradeTooLowException){
		std::cout << "ben c'est trop bas mon amis" << std::endl;}
	catch (AForm::GradeTooHighException){
			std::cout << "AForm : ben c'est trop haut mon amis" << std::endl;}
	catch (AForm::GradeTooLowException){
			std::cout << "AForm : ben c'est trop bas mon amis" << std::endl;}
	catch (AForm::FormNotSignedException){
			std::cout << "AForm : l'est po signed" << std::endl;}
		
}
	return 0;
}