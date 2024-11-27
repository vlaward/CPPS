/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:27:43 by ncrombez          #+#    #+#             */
/*   Updated: 2024/11/13 15:45:05 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(){
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "voici l'adresse de str :" << &str << std::endl;
	std::cout << "voici l'adresse d'un pointeur de str :" << stringPTR << std::endl;
	std::cout << "voici l'adresse d'une reference de str :" << &stringREF << std::endl;

	std::cout << "voici la valeur stockee dans str :" << str << std::endl;
	std::cout << "voici la valeur stockee dans un pointeur de str :" << *stringPTR << std::endl;
	std::cout << "voici la valeur stockee dans une reference de str :" << stringREF << std::endl;

}