/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:38:47 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/08 21:50:11 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#define COUT std::cout
#define ENDL std::endl
#define STRING std::string

#define BLUE	"\033[0;34m"
#define PURPLE	"\033[0;35m"
#define RED		"\033[0;31m"
#define GREEN	"\033[0;32m"
#define SEA		"\033[0;36m"  
#define RESET	"\033[0m"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:

		STRING name;
		
	public:
			
		DiamondTrap();
		DiamondTrap(STRING const name);
		DiamondTrap(const DiamondTrap&);
		DiamondTrap& operator = (const DiamondTrap&);
		~DiamondTrap();

		void attack(std::string const &target);
		void whoAmI();
		
};

#endif