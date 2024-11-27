/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncrombez <ncrombez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:33:33 by ncrombez          #+#    #+#             */
/*   Updated: 2024/11/19 16:24:04 by ncrombez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

int	main(int argc, char **argv){
	std::ifstream file_in; //(pars ce que file stream, file streamer. streamer sardoche. t'as capte)
	std::ofstream file_out;
	std::string	buff;
	std::string	content;
	std::size_t	found = 0;


	if (argc != 4 || argv[2] == "" || argv[3] == ""){
		std::cout << "usage : ./replace <file_name> <to_replace> <replacement>\n";
		return (1);
	}

	file_in.open(argv[1]);
	if (!file_in.is_open()){
		std::cout << "no such file or directory";
		return (1);
	}
	
	while (getline(file_in, buff))
		content += buff + "\n";
	found = content.find(argv[2], found);
	while (found != std::string::npos){
		content.erase(found, strlen(argv[2]));
		content.insert(found, argv[3]);
		found = content.find(argv[2], found);
	}
	file_in.close();
	
	
	buff = argv[1];
	buff += ".replace";
	file_out.open(buff);
	file_out << content;
	file_out.close();
	return (0);
}