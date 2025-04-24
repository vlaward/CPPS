/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 06:34:59 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/24 03:07:46 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialized.hpp"

int	main()
{
	Data	*test = new Data(14);
	Data	*mh;
	uintptr_t	bl;

	std::cout << "bref, ceci est un test : " << *test << std::endl;
	bl = Serialized::serialize(test);
	mh = Serialized::deserialise(bl);
	std::cout << "bref, ceci est un test : " << *mh << std::endl;
	return 0;
}