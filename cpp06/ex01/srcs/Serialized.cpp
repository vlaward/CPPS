/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialized.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 06:34:38 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/21 06:58:15 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialized.hpp"

uintptr_t	Serialized::serialize(Data *ptr){
	return reinterpret_cast<uintptr_t>(ptr);
}

Data	*Serialized::deserialise(uintptr_t raw){
	return reinterpret_cast<Data *>(raw);
}
