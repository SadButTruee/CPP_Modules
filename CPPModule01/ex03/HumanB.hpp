/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:34:36 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/03 10:00:33 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon*	Weap;

	public:
		HumanB(std::string str);
		void	setWeapon(Weapon& Weap);
		void	attack();
};

#endif