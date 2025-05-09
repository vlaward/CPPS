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

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : AForm("ShrubberyCreationform", 145, 137, target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &to_cpy) : AForm(to_cpy){
	*this = to_cpy;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void	ShrubberyCreationForm::formExecute(){
	std::ofstream	oStream;
	std::string		fileName = this->getTarget() + "_shrubbery";
	
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

