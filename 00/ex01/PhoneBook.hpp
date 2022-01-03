/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 03:11:47 by jode-vri          #+#    #+#             */
/*   Updated: 2021/12/08 12:03:27 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_H__
# define __PHONEBOOK_H__
# include <string>

class PhoneBook {
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;

	public:
		std::string	trim(std::string data);
		
		void		get_contact(int id);
		void		print_contact(void);

		std::string	get_firstname(void);
		void		set_firstname(std::string data);

		std::string	get_lastname(void);
		void		set_lastname(std::string data);

		std::string	get_nickname(void);
		void		set_nickname(std::string data);

		std::string	get_phone_number(void);
		void		set_phone_number(std::string data);

		std::string	get_darkest_secret(void);
		void		set_darkest_secret(std::string data);
};
#endif