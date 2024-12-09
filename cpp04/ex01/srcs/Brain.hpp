/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:42:04 by ncrombez          #+#    #+#             */
/*   Updated: 2024/12/09 18:04:11 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <iostream>


class Brain
{
private:
	std::string	ideas[100];
public:
	Brain();
	Brain(const Brain &to_cpy);
	~Brain();
	Brain	&operator=(const Brain &to_cpy);
};

#endif