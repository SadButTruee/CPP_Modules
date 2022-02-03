/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:51:49 by rtracee           #+#    #+#             */
/*   Updated: 2022/01/29 17:23:18 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	public:

		Contact contacts[8];
};

void	ft_command_add(PhoneBook &PhoBook, int i);
void	ft_command_search(PhoneBook PhoBook, int i);
void	ft_format_string(std::string);
#endif