/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:00:51 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/08 15:03:20 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#define BLUE "\033[0;34m"
#define PURPLE "\033[0;35m"
#define RESET "\033[0m"

int main()
{
	COUT << "\n******************************************************************\n\n";

	ClapTrap jerry("JERRY");
	ScavTrap empty;
	
	COUT << "\n******************************************************************\n\n";
	empty.attack("Jerry");
	empty = ScavTrap("JACK");
	empty.attack("Jerry");
	
	COUT << "\n******************************************************************\n\n";
	
	
	COUT << "\n******************************************************************\n\n";
	
	jerry.takeDamage(9);
	for (int i = 0; i < 9; ++i) 
		jerry.beRepaired(1);
	jerry.attack("TOM");
	jerry.attack("TOM");
	jerry.beRepaired(500);
	
	COUT << "\n******************************************************************\n\n";
	
	empty.attack("Gideon");
	empty.guardGate();
	empty.takeDamage(1);
	empty.beRepaired(1);
	empty.takeDamage(100);
	empty.beRepaired(100);
	
	COUT << "\n\n";
	return 0;
}