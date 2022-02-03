/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 20:57:54 by rtracee           #+#    #+#             */
/*   Updated: 2022/01/30 10:57:18 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string sar2) : sar(sar2)
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << "Destructor " << this->sar << " called" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->sar << ": BraiiiiiiinnnzzzZ..." << std::endl;
}