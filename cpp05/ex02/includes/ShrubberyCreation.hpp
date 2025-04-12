/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreation.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 04:32:00 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/09 05:02:46 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATION_HPP
# define SHRUBBERYCREATION_HPP


# include "AForm.hpp"
# include <fstream>


class ShrubberyCreationForm : public AForm
{
public:
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &to_cpy);
	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm &to_cpy);
	~ShrubberyCreationForm();
	std::string	getTarget() const;

	void	formExecute(Bureaucrat const & bubu);
};

#endif