/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreation.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 04:49:55 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/09 05:04:55 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreation.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : AForm("ShrubberyCreationform", 145, 137){
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &to_cpy) : AForm(src){
	*this = src;
}

ShrubberyCreationForm::ShrubberyCreationForm&	operator=(const ShrubberyCreationForm &to_cpy){
	if (this != &to_cpy){
		this->_isSigned = to_cpy.isSigned();
		this->_isSigned = to_cpy.getTarget();
	}
	return (*this);
	

}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

std::string	ShrubberyCreationForm::getTarget(){
	return (this->_target);
}


void	ShrubberyCreationForm::formExecute(Bureaucrat const & bubu){
	std::ofstream	oStream;
	std::string		fileName = this->_target + "_shrubbery";
	
	oStream.open(fileName.c_str(), std::ios::out | std::ios::app);
	oStream << "	                                                         ." << std::endl;
	oStream << "                                              .         ;  " << std::endl;
	oStream << "                 .              .              ;%     ;;   " << std::endl;
	oStream << "                   ,           ,                :;%  %;   " << std::endl;
	oStream << "                    :         ;                   :;%;'     .,   " << std::endl;
	oStream << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
	oStream << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	oStream << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
	oStream << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	oStream << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	oStream << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	oStream << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
	oStream << "                      `@%:.  :;%.         ;@@%;'   " << std::endl;
	oStream << "                        `@%.  `;@%.      ;@@%;         " << std::endl;
	oStream << "                          `@%%. `@%%    ;@@%;        " << std::endl;
	oStream << "                            ;@%. :@%%  %@@%;       " << std::endl;
	oStream << "                              %@bd%%%bd%%:;     " << std::endl;
	oStream << "                                #@%%%%%:;;" << std::endl;
	oStream << "                                %@@%%%::;" << std::endl;
	oStream << "                                %@@@%(o);  . '         " << std::endl;
	oStream << "                                %@@@o%;:(.,'         " << std::endl;
	oStream << "                            `.. %@@@o%::;         " << std::endl;
	oStream << "                               `)@@@o%::;         " << std::endl;
	oStream << "                                %@@(o)::;        " << std::endl;
	oStream << "                               .%@@@@%::;         " << std::endl;
	oStream << "                               ;%@@@@%::;.          " << std::endl;
	oStream << "                              ;%@@@@%%:;;;. " << std::endl;
	oStream << "                          ...;%@@@@@%%:;;;;,.. " << std::endl;
	oStream.close();

}

