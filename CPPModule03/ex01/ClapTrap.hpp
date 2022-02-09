/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:02:54 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/08 13:56:12 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#define COUT std::cout
#define ENDL std::endl
#define STRING std::string

class ClapTrap
{
	public:

		ClapTrap();
		ClapTrap(STRING);
		ClapTrap(const ClapTrap& CT);
		ClapTrap & operator = (const ClapTrap& CT);
		~ClapTrap(); 

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected:

		STRING	name;
		int		Hit;
		int		Energy;
		int		Damage;
};

#endif