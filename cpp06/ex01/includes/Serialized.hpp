/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialized.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 06:37:28 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/21 07:01:15 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZED_HPP
# define SERIALIZED_HPP
# include <stdint.h>
# include "Data.hpp"

class Serialized{
public :
	static uintptr_t	serialize(Data* ptr);
	static Data	*deserialise(uintptr_t raw);
};

#endif