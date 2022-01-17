/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:08:29 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/17 07:38:00 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "str address: " << &str << std::endl;
	std::cout << "ptr address: " << stringPTR << std::endl;
	std::cout << "ref address: " << &stringREF << std::endl;

	std::cout << "ptr value: " << *stringPTR << std::endl;
	std::cout << "ref value: " << stringREF << std::endl;
	
}