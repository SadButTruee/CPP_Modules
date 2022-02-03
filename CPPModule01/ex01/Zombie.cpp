/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 13:32:49 by rtracee           #+#    #+#             */
/*   Updated: 2022/01/30 15:19:28 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << "Destructor " << this->sar << " called" << std::endl;
}

void	Zombie::setSar(std::string str)
{
	this->sar = str;
}

std::string	Zombie::getSar()
{
	return (this->sar);
}

void	Zombie::announce(void)
{
	std::cout << this->sar << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
