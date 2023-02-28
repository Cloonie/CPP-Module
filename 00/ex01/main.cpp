/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew <mliew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:32:44 by mliew             #+#    #+#             */
/*   Updated: 2023/02/27 13:32:44 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook 	object;
	std::string cmd;

	std::cout	<< "~ PHONEBOOK from CPP00 EX01 ~\n"
				<< "ADD: saves a new contact.\n"
				<< "SEARCH: display a specific contact.\n"
				<< "EXIT: program quits and the contacts are lost forever!.\n";
	while (1)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			object.add_contact();
		if (cmd == "SEARCH")
			object.display_contacts();
		if (cmd == "EXIT")
			break ;
	}
	return 0;
}