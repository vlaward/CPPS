/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequest.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 04:32:00 by ncrombez          #+#    #+#             */
/*   Updated: 2025/04/09 05:40:20 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUEST_HPP
# define ROBOTOMYREQUEST_HPP


# include "AForm.hpp"


class RobotomyRequestForm : public AForm
{
public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(const RobotomyRequestForm &to_cpy);
	RobotomyRequestForm&	operator=(const RobotomyRequestForm &to_cpy);
	~RobotomyRequestForm();
	std::string	getTarget() const;

	void	formExecute(Bureaucrat const & bubu);
};

#endif