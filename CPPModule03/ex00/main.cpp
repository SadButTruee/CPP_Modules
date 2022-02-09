/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:10:02 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/08 13:00:01 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	COUT << "\n******************************************************************\n\n";
	ClapTrap empty;
	ClapTrap* sar = new ClapTrap("SAR");
	ClapTrap jon("Jon");
	sar->attack("Jon");
	
	COUT << "\n******************************************************************\n\n";
	
	empty = jon;
	ClapTrap copy_jon(jon);
	empty.attack("DIO");
	
	COUT << "\n******************************************************************\n\n";
	
	ClapTrap jerry("JERRY");
	
	COUT << "\n******************************************************************\n\n";
	
	jerry.takeDamage(9);
	for (int i = 0; i < 9; ++i) 
		jerry.beRepaired(1);
	jerry.attack("TOM");
	jerry.attack("TOM");
	jerry.beRepaired(500);
	
	COUT << "\n******************************************************************\n\n";
	
	sar->takeDamage(10);
	sar->attack("Jon");
	sar->beRepaired(5);
	sar->takeDamage(1);
	
	COUT << "\n\n";
	delete sar;
	return 0;
}