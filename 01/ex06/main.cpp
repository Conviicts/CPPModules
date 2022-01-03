/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:10:08 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/03 09:10:09 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av) {
	Karen karen;
	enum levels { DEBUG, INFO, WARNING, ERROR};
	int i;
	if (ac != 2) {
		std::cerr << "USAGE: ./KarenFilter <DEBUG|INFO|WARNING|ERROR>" << std::endl;
		return (1);
	}
	for (i = 0; i < 4; i++)
		if (av[1] == karen.getLevel(i))
			break ;
	switch (i)
	{
		case DEBUG:
			karen.complain("DEBUG");
			break;
		case INFO:
			karen.complain("INFO");
			break;
		case WARNING:
			karen.complain("WARNING");
			break;
		case ERROR:
			karen.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}