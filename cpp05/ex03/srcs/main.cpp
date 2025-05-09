/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:25:34 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/21 02:50:35 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main(){
{
	try{
		Intern bob;
		Bureaucrat marie("Marie", 1);
		AForm 		*shrub = bob.makeForm("shrubbery creation", "mon_reuf");


		std::cout << marie << std::endl;
		std::cout << *shrub << std::endl;
		marie.signForm(*shrub);
		marie.executeForm(*shrub);
		
		
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