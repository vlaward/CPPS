/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:58:50 by ncrombez          #+#    #+#             */
/*   Updated: 2024/11/19 17:00:23 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(){
	Harl	rd;

	rd.complain("debug");
	rd.complain("info");
	rd.complain("warning");
	rd.complain("error");
	return (0);	
}