/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:18:01 by rtracee           #+#    #+#             */
/*   Updated: 2022/01/29 17:23:44 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class Contact
{
	private:

		std::string	name;
		std::string	surname;
		std::string	nickname;
		std::string phone_number;
		std::string secret;
	public:

		void		setName(std::string);
		void		setSurname(std::string);
		void		setNickname(std::string);
		void		setPhone_nubber(std::string);
		void		setSecret(std::string);

		std::string	getName(void)const;
		std::string	getSurname(void)const;
		std::string	getNickname(void)const;
		std::string	getPhone_number(void)const;
		std::string	getSecret(void)const;
};

#endif