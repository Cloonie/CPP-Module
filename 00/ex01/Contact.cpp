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

void	Contact::add_details()
{
	std::cout << "Please enter your First Name:" << std::endl;
	std::cin >> this->first_name;
	std::cout << "Please enter your Last Name:" << std::endl;
	std::cin >> this->last_name;
	std::cout << "Please enter your Nickname:" << std::endl;
	std::cin >> this->nickname;
	std::cout << "Please enter your Phone Number:" << std::endl;
	std::cin >> this->phone_number;
	std::cout << "Please enter your Darkest Secret:" << std::endl;
	std::cin >> this->darkest_secret;
}
