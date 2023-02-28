/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew <mliew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:15:43 by mliew             #+#    #+#             */
/*   Updated: 2023/02/27 14:15:43 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdio>
#include <limits>

#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook
{
	public:
		void		add_contact();
		void		display_contacts();
		std::string	append_string(std::string str);
	private:
		Contact		contact[MAX_CONTACTS];
};

#endif