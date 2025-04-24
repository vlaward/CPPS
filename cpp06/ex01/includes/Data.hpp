/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 06:39:28 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/21 06:53:41 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data{
private :
	int	_value;
public:
	Data(int value);
	Data &operator=(Data const &to_cpy);
	Data(Data const &to_cpy);
	~Data();

	int	getValue() const;
};

std::ostream& operator<<(std::ostream &os, const Data &dada);

#endif