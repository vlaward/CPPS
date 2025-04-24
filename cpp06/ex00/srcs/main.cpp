/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 04:25:36 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/21 05:09:50 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScaleConverter.hpp"

int	main(int argc, char **argv){
	if (argc != 2){
		std::cout << "Usage : ScaleConverter \"To_convert\"" << std::endl;
		return 1;
	}
	ScaleConverter::converter(argv[1]);
	return 0;
}