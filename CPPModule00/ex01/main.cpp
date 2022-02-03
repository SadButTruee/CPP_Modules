/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:28:57 by rtracee           #+#    #+#             */
/*   Updated: 2022/01/29 17:24:17 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main()
{
	std::string	command;
	PhoneBook	PhoBook;
	int			i;
	int			j;
	i = 0;
	j = 0;
	while (1)
	{
		std::cout << "Enter the command: ADD, SEARCH or EXIT: " << std::endl;
		std::cin >> command;
		if (command == "ADD")
		{
			if (i == 8)
			{
				if (j == 8)
					j = 0;
				ft_command_add(PhoBook, j);
				j++;
			}
			else
			{
			ft_command_add(PhoBook, i);
			i++;
			}
		}
		else if (command == "EXIT")
			return (0);
		else if (command == "SEARCH")
		 	ft_command_search(PhoBook, i);
		else
			std::cout << "Incorrect command" << std::endl;
	}
	return 0;
}