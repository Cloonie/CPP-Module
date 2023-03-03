/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew <mliew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:54:51 by mliew             #+#    #+#             */
/*   Updated: 2023/02/27 18:54:51 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::add_contact()
{
	Contact		tmp;
	static int	i;
	std::string yesno;

	if (i == MAX_CONTACTS)
	{
		while (1)
		{
			std::cout << "Adding new contacts will replace your oldest contact." << std::endl;
			std::cout << "Enter (YES / NO): ";
			std::getline(std::cin, yesno);
			if (yesno == "YES")
			{
				i = 0;
				break ;
			}
			else if (yesno == "NO")
				return ;
			else
				std::cout << "Error: input must be YES or NO in uppercase." << std::endl;
		}
	}
	while (1)
	{
		if (tmp.add_details())
			std::cout << "Error: details cannot be empty." << std::endl;
		else
			break ;
	}
	this->contact[i] = tmp;
	i++;
}

void	PhoneBook::display_contacts()
{
	Contact	tmp;

	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (int i = 0; i < MAX_CONTACTS; i++) // for loop display list of 8 contacts
	{
		tmp = this->contact[i];
		std::cout << "|"
		<< std::setw(10) << i + 1 << "|"
		<< std::setw(10) << append_string(tmp.get_first_name()) << "|"
		<< std::setw(10) << append_string(tmp.get_last_name()) << "|"
		<< std::setw(10) << append_string(tmp.get_nickname()) << "|"
		<< std::endl;
	}
	while (1)
	{
		int	index;
		std::cout << "Enter an index (1 - 8): ";
		std::cin >> index;
		if (std::cin.fail()) // input was not an integer
		{
			std::cin.clear(); // clear the fail flag
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard bad input
			std::cout << "Error: input must be an integer." << std::endl;
		}
		else if (index >= 1 && index <= 8) // prints out details of a contact selected
		{
			tmp = this->contact[index - 1];
			std::cout << "First Name: " << tmp.get_first_name() << std::endl;
			std::cout << "Last Name: " << tmp.get_last_name() << std::endl;
			std::cout << "Nickname: " << tmp.get_nickname() << std::endl;
			std::cout << "Phone Number: " << tmp.get_phone_number() << std::endl;
			std::cout << "Darkest Secret: " << tmp.get_darkest_secret() << std::endl;
			break ;
		}
		else
			std::cout << "Error: input must be between 1 and 8." << std::endl;
	}
	while (std::cin.get() != '\n')
		continue;
}

std::string	PhoneBook::append_string(std::string str)
{
	if (str.length() > 10) // checks if length of str is more than 10
	{
		str.resize(9); // resize to first 9 characters in the string
		str.append("."); // append by adding a character at the end of the string
	}
	return (str);
}