/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:32:31 by rtracee           #+#    #+#             */
/*   Updated: 2022/01/30 19:53:44 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon& clas) : name(str) , Weap(clas)
{
	return ;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->Weap.getType() << std::endl;
}
