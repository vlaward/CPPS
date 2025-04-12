/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardon.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 04:32:00 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/09 05:40:19 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDON_HPP
# define PRESIDENTIALPARDON_HPP


# include "AForm.hpp"


class PresidentialPardonForm : public AForm
{
public:
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(const PresidentialPardonForm &to_cpy);
	PresidentialPardonForm&	operator=(const PresidentialPardonForm &to_cpy);
	~PresidentialPardonForm();
	std::string	getTarget() const;

	void	formExecute(Bureaucrat const & bubu);
};

#endif