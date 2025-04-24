/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScaleConverter.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 04:24:36 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/21 05:32:19 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScaleConverter.hpp"


static void	convertPrint(char chared, int inted, float floated, double doubled){
	if (isprint(chared))
		std::cout << "char: " << chared << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << inted << std::endl;
	std::cout << "float: " << floated ;
	if ((float)inted == floated)
		std::cout << ".0";
	std::cout << "f" << std::endl;
	std::cout << "double: " << doubled;
	if ((float)inted == floated)
		std::cout << ".0";
	std::cout << std::endl;
}

static void	convertPrintConst(std::string const &chared, std::string const &inted, std::string const &floated, std::string const &doubled){
	std::cout << "char: " << chared << std::endl;
	std::cout << "int: " << inted << std::endl;
	std::cout << "float: " << floated << std::endl;
	std::cout << "double: " << doubled << std::endl;
}

static void	convertError(){
	std::cerr << "converted input error : format is not right" << std::endl;
}

int	is_numeric(std::string const &to_convert){
	int	i = 0;

	if (to_convert[i] == '-')
		i++;
	if (!isdigit(to_convert[i++]))
		return 0;
	while (to_convert[i]){
		if (!isdigit(to_convert[i]) && to_convert[i] != '.')
			return 0;
		i++;
	}
	return 1;
}

void	ScaleConverter::converter(std::string const &to_convert){
	float nmbr;

	if (to_convert == "nan" || to_convert == "nanf"){
		convertPrintConst("impossible", "impossible", "nanf", "nan");
		return;
	}
	if (to_convert == "-inf" || to_convert == "-inff"){
		convertPrintConst("impossible", "impossible", "-inff", "-inf");
		return;
	}
	if (to_convert == "+inf" || to_convert == "+inff"){
		convertPrintConst("impossible", "impossible", "+inff", "+inf");
		return;
	}
	if (is_numeric(to_convert)){
		nmbr = stof(to_convert);
	}
	else if (to_convert.size() == 1 && isprint(to_convert[0]))
		nmbr = to_convert[0];
	else{
		convertError();
		return ;
	}
	convertPrint((char)nmbr, (int)nmbr, (float)nmbr, (double)nmbr);
}




