/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:45:30 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/08 21:08:18 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

#define COUT std::cout
#define ENDL std::endl
#define STRING std::string

#define BLUE	"\033[0;34m"
#define PURPLE	"\033[0;35m"
#define RED		"\033[0;31m"
#define GREEN	"\033[0;32m"
#define SEA		"\033[0;36m"  
#define RESET	"\033[0m"

class FragTrap : virtual public ClapTrap
{
	public:

		FragTrap();
		FragTrap(STRING);
		FragTrap(const FragTrap&);
		FragTrap & operator = (const FragTrap&);
		~FragTrap();

		void	highFivesGuys(void);
		int		getHit(void);
		int		getDamage(void);
		
	protected:

		int		Hit;
		int		Damage;

};

#endif