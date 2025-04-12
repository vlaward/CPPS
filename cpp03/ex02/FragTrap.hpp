/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:57:28 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/09 05:17:25 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTRAP_HPP
# define FragTRAP_HPP
# ifndef STRING
#  include <string>
# endif
# ifndef IOSTREAM
#  include <iostream>
# endif
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
private:

public:

	FragTrap(std::string str);
	FragTrap();
	~FragTrap();
	FragTrap(const FragTrap &to_cpy);

	void	highFiveGuys();
};

#endif
