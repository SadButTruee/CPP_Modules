/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:33:55 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/03 10:00:24 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str) : name(str)
{
	this->Weap = NULL;
	return ;
}

void	HumanB::setWeapon(Weapon& Weap)
{
	this->Weap = &Weap;
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->Weap->getType() << std::endl;
}