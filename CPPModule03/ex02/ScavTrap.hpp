/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:07:28 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/08 17:03:20 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

#define COUT std::cout
#define ENDL std::endl
#define STRING std::string

class ScavTrap : public ClapTrap
{
	public:

		ScavTrap();
		ScavTrap(STRING);
		ScavTrap(const ScavTrap& CT);
		ScavTrap & operator = (const ScavTrap& CT);
		~ScavTrap();

		void attack(std::string const &target);
		void guardGate(void);

};

#endif