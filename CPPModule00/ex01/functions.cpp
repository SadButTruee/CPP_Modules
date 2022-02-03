/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 12:07:42 by rtracee           #+#    #+#             */
/*   Updated: 2022/01/29 17:24:45 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	ft_command_add(PhoneBook &PhoBook, int i)
{
		std::string	command;

			std::cout <<"Enter the name of the contact: " << std::endl;
			std::cin >> command;
			PhoBook.contacts[i].setName(command);
			std::cout << "Enter the surname of the contact: " << std::endl;
			std::cin >> command;
			PhoBook.contacts[i].setSurname(command);
			std::cout << "Enter the nickname of the contact: " << std::endl;
			std::cin >>command;
			PhoBook.contacts[i].setNickname(command);
			std::cout << "Enter the phone number of the contact: " << std::endl;
			std::cin >> command;
			PhoBook.contacts[i].setPhone_nubber(command);
			std::cout << "Enter the secret of the contact: " << std::endl;
			std::cin >> command;
			PhoBook.contacts[i].setSecret(command);
}

void	ft_format_string(std::string	contact)
{
	if (contact.length() > 10)
	{
		contact.erase(9);
		std::cout << contact << ".|";
	}
	else
		std::cout << std::setw(10) << contact << "|";
}

void	ft_cout_info(PhoneBook PhoBook, int i)
{
	i--;
	std::cout << PhoBook.contacts[i].getName() << std::endl;
	std::cout << PhoBook.contacts[i].getSurname() << std::endl;
	std::cout << PhoBook.contacts[i].getNickname() << std::endl;
	std::cout << PhoBook.contacts[i].getPhone_number() << std::endl;
	std::cout << PhoBook.contacts[i].getSecret() << std::endl;
}

void	ft_command_search(PhoneBook PhoBook, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		std::cout << std::setw(10) << j + 1 << "|";
		ft_format_string(PhoBook.contacts[j].getName());
		ft_format_string(PhoBook.contacts[j].getSurname());
		ft_format_string(PhoBook.contacts[j].getNickname());
		std::cout << std::endl;
		j++;
	}
	std::cout << "Enter the index of contact: " << std::endl;
	std::cin >> i;
	while (1)
	{
		if (i > 0 && i <= j)
			break ;
		else
		{
			std::cout << "Incorrect index" << std::endl;
			std::cout << "Enter the index of contact: " << std::endl;
			std::cin >> i;
		}
	}
	ft_cout_info(PhoBook, i);
}
