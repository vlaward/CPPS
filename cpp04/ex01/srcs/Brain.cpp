/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:46:49 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/09 18:07:37 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){std::cout << "Brain Created" << std::endl;}

Brain::~Brain(){std::cout << "Brain destroyed muahahah" << std::endl;}

Brain::Brain(const Brain &to_cpy){*this = to_cpy;}

Brain	&Brain::operator=(const Brain &to_cpy){
	if (this == &to_cpy){return *this;}
	for (int i = 0 ; i < 100 ; i++)
		this->ideas[i] = to_cpy.ideas[i];
	return *this;
}