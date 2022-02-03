/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:22:06 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/03 15:11:16 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string str)
{
	int	i;

	i = 0;
	std::string	command[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Karen::*Karen_ptr[i])(void);

	Karen_ptr[0] = &Karen::debug;
	Karen_ptr[1] = &Karen::info;
	Karen_ptr[2] = &Karen::warning;
	Karen_ptr[3] = &Karen::error;

	while (i < 4)
	{
		if (str == command[i])
		{
			(this->*Karen_ptr[i])();
			break ;
		}
		i++;
	}
}