/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 10:55:59 by rtracee           #+#    #+#             */
/*   Updated: 2022/01/29 17:24:27 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	Contact::setName(std::string sar)
{
	this->name = sar;
}

void	Contact::setSurname(std::string sar)
{
	this->surname = sar;
}

void	Contact::setNickname(std::string sar)
{
	this->nickname = sar;
}

void	Contact::setPhone_nubber(std::string sar)
{
	this->phone_number = sar;
}

void	Contact::setSecret(std::string sar)
{
	this->secret = sar;
}

std::string	Contact::getName(void)const
{
	return(this->name);
}

std::string	Contact::getSurname(void)const
{
	return(this->surname);
}

std::string	Contact::getNickname(void)const
{
	return(this->nickname);
}

std::string	Contact::getPhone_number(void)const
{
	return(this->phone_number);
}

std::string	Contact::getSecret(void)const
{
	return(this->secret);
}