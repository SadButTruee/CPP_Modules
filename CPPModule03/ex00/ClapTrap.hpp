/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:12:05 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/07 21:34:57 by rtracee          ###   ########.fr       */
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

	private:

		STRING	name;
		int		Hit;
		int		Energy;
		int		Damage;
};

#endif