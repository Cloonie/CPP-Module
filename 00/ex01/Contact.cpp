/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew <mliew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:20:54 by mliew             #+#    #+#             */
/*   Updated: 2023/02/27 18:20:54 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int	Contact::add_details()
{
	std::cout << "Enter your First Name: ";
	std::getline(std::cin, this->first_name);
	if (this->first_name == "")
		return (1);
	std::cout << "Enter your Last Name: ";
	std::getline(std::cin, this->last_name);
	if (this->last_name == "")
		return (1);
	std::cout << "Enter your Nickname: ";
	std::getline(std::cin, this->nickname);
	if (this->nickname == "")
		return (1);
	std::cout << "Enter your Phone Number: ";
	std::getline(std::cin, this->phone_number);
	if (this->phone_number == "")
		return (1);
	std::cout << "Enter your Darkest Secret: ";
	std::getline(std::cin, this->darkest_secret);
	if (this->darkest_secret == "")
		return (1);
	return (0);
}

std::string	Contact::get_first_name()
{
	return(this->first_name);
}

std::string	Contact::get_last_name()
{
	return(this->last_name);
}

std::string	Contact::get_nickname()
{
	return(this->nickname);
}

std::string	Contact::get_phone_number()
{
	return(this->phone_number);
}

std::string	Contact::get_darkest_secret()
{
	return(this->darkest_secret);
}
