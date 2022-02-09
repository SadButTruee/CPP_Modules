/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:02:54 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/09 12:48:30 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#define COUT std::cout
#define ENDL std::endl
#define STRING std::string

#define BLUE	"\033[0;34m"
#define PURPLE	"\033[0;35m"
#define RED		"\033[0;31m"
#define GREEN	"\033[0;32m"
#define SEA		"\033[0;36m"  
#define RESET	"\033[0m"

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
		STRING getName()const;

	protected:

		STRING	name;
		int		Hit;
		int		Energy;
		int		Damage;
};


static STRING str = "_clap_name";

#endif