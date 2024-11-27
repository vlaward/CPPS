/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:25:11 by ncrombez          #+#    #+#             */
/*   Updated: 2024/11/19 17:00:45 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# ifndef STRING_H
#  include <string>
# endif
# ifndef IOSTRAM_H
#  include <iostream>
# endif


class Harl{
private :
	void	debug();
	void	info();
	void	warning();
	void	error();
public :
	Harl(void);
	~Harl(void);
	void	complain(std::string level);
};

#endif