/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew <mliew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 23:43:43 by mliew             #+#    #+#             */
/*   Updated: 2023/02/26 23:43:43 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		for (int j = 1; j < ac; j++)
		{
			for (size_t i = 0; i < strlen(av[j]); i++)
				putwchar(toupper(av[j][i]));
			putwchar(' ');
		}
		putwchar('\n');
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}
