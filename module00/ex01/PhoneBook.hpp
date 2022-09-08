/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:39:43 by lgiband           #+#    #+#             */
/*   Updated: 2022/08/23 11:41:48 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"

class Phonebook {
	
	public:
		Phonebook(void);
		~Phonebook(void);
		int 	search_contact(int index);
		void	print_one_contact(int index);
		int 	add_contact(int index);
		void	print_contact(int index);
		void	print_elem(std::string elem);

	private:
		Contact contacts[8];
};
