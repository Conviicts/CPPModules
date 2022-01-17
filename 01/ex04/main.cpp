/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:09:36 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/17 07:53:36 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av) {
	size_t		pos;
	std::string	s1;
	std::string	s2;
	std::string	content;
	std::string	line;
	std::string newFile;

	if (ac != 4) {
		std::cerr << "USAGE: ./Replace <file> <tofind> <replace>" << std::endl;
		return (1);
	}
	s1 = av[2];
	s2 = av[3];

	if (!s1.compare(s2)) {
		std::cerr << "same phrase" << std::endl;
		return (1);
	}
	std::ifstream file(av[1]);
	if (!file.is_open()) {
		std::cerr << "Unable to open file: " << av[1] << std::endl;
		return (1);
	}
	newFile = av[1] + std::string(".replace");
	std::ofstream replaceFile(newFile.c_str());
	if (!replaceFile.is_open()) {
		std::cerr << "Unable to open/create file: " << newFile << std::endl;
		return (1);
	}
	pos = 0;
	while (std::getline(file, line)) {
        while ((pos = line.find(av[2])) != std::string::npos) {
            line.erase(pos, s1.size());
            line.insert(pos, av[3]);
        }
        content += line + '\n';
    }
    replaceFile << content;
	file.close();
	replaceFile.close();
	return (0);
}