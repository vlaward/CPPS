/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 21:18:02 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/29 08:41:52 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include "Plate.hpp"


void	plusun(int &n){
	n++;	
}

void	moinchar(char &c){
	c--;
}



int main(){
	int	arrint[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	char	charray[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

	iter(&arrint[0], 9, &plusun);
	iter(&charray[0], 9, &moinchar);
	for (int i = 0; i < 9; i++){
		std::cout << arrint[i];
	}
	std::cout << std::endl;
	std::cout << charray << std::endl;
}