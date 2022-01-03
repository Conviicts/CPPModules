/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 03:17:53 by jode-vri          #+#    #+#             */
/*   Updated: 2021/12/10 06:44:20 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

std::string	PhoneBook::trim(std::string data)
{
	if (data.length() >= 10)
		data = data.substr(0, 9).append(".");
	return (data);
}

void		PhoneBook::get_contact(int id) {
	std::cout << std::setfill(' ') << std::setw(10) << id;
    std::cout << "|";
	std::cout << std::setfill(' ') << std::setw(10) << trim(first_name);
	std::cout << "|";
	std::cout << std::setfill(' ') << std::setw(10) << trim(last_name);
	std::cout << "|";
	std::cout << std::setfill(' ') << std::setw(10) << trim(nickname);
	std::cout << "|";
	std::cout << std::endl;
}

void		PhoneBook::print_contact(void) {
    std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phone_number << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}

std::string	PhoneBook::get_firstname(void) {
	return (this->first_name);
}

void		PhoneBook::set_firstname(std::string data) {
	this->first_name = data;
}

std::string	PhoneBook::get_lastname(void) {
	return (this->last_name);
}

void		PhoneBook::set_lastname(std::string data) {
	this->last_name = data;
}

std::string PhoneBook::get_nickname(void) {
	return (this->nickname);
}
void		PhoneBook::set_nickname(std::string data) {
	this->nickname = data;
}

std::string	PhoneBook::get_phone_number(void) {
	return (this->phone_number);
}
void		PhoneBook::set_phone_number(std::string data) {
	this->phone_number = data;
}

std::string	PhoneBook::get_darkest_secret(void) {
	return (this->darkest_secret);
}
void		PhoneBook::set_darkest_secret(std::string data) {
	this->darkest_secret = data;
}