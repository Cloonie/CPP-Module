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

	if (i == 1)
	{
		while (1)
		{
			std::cout << "Adding new contacts will replace your oldest contact." << std::endl;
			std::cout << "Please type YES / NO." << std::endl;
			std::cin >> yesno;
			if (yesno == "YES")
			{
				i = 0;
				break ;
			}
			else if (yesno == "NO")
				return ;
			else
				std::cout << "Error." << std::endl;
		}
	}
	tmp.add_details();
	this->contact[i] = tmp;
	i++;
}

void	PhoneBook::display_contacts()
{
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (int i = 0; i < MAX_CONTACTS; i++)
	{
		std::cout << "|"
		<< std::setw(10) << i + 1 << "|"
		<< std::setw(10) << this->contact[i].first_name << "|"
		<< std::setw(10) << this->contact[i].last_name << "|"
		<< std::setw(10) << this->contact[i].nickname << "|"
		<< std::endl;
	}

	// for (int i = 0; i < 8; i++)
	// {
	// 	std::cout << "First Name: " << this->contact[i].first_name << std::endl;
	// 	std::cout << "Last Name: " << this->contact[i].last_name << std::endl;
	// 	std::cout << "Nickname: " << this->contact[i].nickname << std::endl;
	// 	std::cout << "Phone Number: " << this->contact[i].phone_number << std::endl;
	// 	std::cout << "Darkest Secret: " << this->contact[i].darkest_secret << std::endl;
	// }
}