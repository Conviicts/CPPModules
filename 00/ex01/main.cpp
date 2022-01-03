/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 02:55:49 by jode-vri          #+#    #+#             */
/*   Updated: 2021/12/06 04:57:26 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "PhoneBook.hpp"

PhoneBook	get_some_infos() {
	PhoneBook	neww;
	std::string	data;

	std::cout << "\tFirst Name: ";
	getline(std::cin, data);
	neww.set_firstname(data);

	std::cout << "\tLast Name: ";
	getline(std::cin, data);
	neww.set_lastname(data);

	std::cout << "\tNickname: ";
	getline(std::cin, data);
	neww.set_nickname(data);

	std::cout << "\tPhone Number: ";
	getline(std::cin, data);
	neww.set_phone_number(data);

	std::cout << "\tDarkest secret: ";
	getline(std::cin, data);
	neww.set_darkest_secret(data);
	return (neww);
}

void	search(PhoneBook book[8], int count) {
	int id;

	std::cout << "id contact: ";
	while (!(std::cin >> id) || id < 1 || id > count) {
		std::cout << "Wrong input, please enter valid contact id: ";
		std::cin.clear();
		std::cin.ignore(10000,'\n');
	}
	book[id - 1].print_contact();
	std::cin.clear();
	std::cin.ignore(10000,'\n');
}

int main() {
	std::string		command;
	PhoneBook		phoneBook[8];
	int				count;

	count = 0;
	std::cout << "enter command: ";
	getline(std::cin, command);
	while (command != "EXIT") {
		if (command == "ADD" && count >= 8) {
			std::cout << "you can't have more than 8 friends in your contacts"
			<< std::endl;
		}
		else if (command == "ADD")
			phoneBook[count++] = get_some_infos();
		else if (command == "SEARCH" && count <= 0)
			std::cout << "No contact in your list" << std::endl;
		else if (command == "SEARCH") {
			for (int i = 0; i < count; i++)
				phoneBook[i].get_contact(i + 1);
			search(phoneBook, count);
		}
		std::cout << "enter command: ";
		getline(std::cin, command);
	}
}
