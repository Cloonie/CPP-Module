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
	PhoneBook object;
	std::string cmd;
	while (1)
	{
		std::cout	<< "Enter a command:\n"
					<< "ADD: adds a new contact.\n"
					<< "SEARCH: search for a contact in a list.\n"
					<< "EXIT: exit program.\n";
		std::cin >> cmd;
		if (cmd == "ADD")
			object.add_contact();
		else if (cmd == "SEARCH")
			object.display_contacts();
		else if (cmd == "EXIT")
			break ;
	}
	return 0;
}