/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:00:51 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/08 21:36:54 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	COUT << "\n******************************************************************\n\n";

	ClapTrap sar("SAR");
	ScavTrap jerry("Jerry");
	FragTrap tom("Tom");
	
	COUT << "\n******************************************************************\n\n";
	
	sar.takeDamage(9);
	for (int i = 0; i < 9; ++i) 
		sar.beRepaired(1);
	sar.attack("Tom");
	sar.attack("Tom");
	sar.beRepaired(500);
	
	COUT << "\n******************************************************************\n\n";
	
	jerry.attack("Tom");
	jerry.guardGate();
	jerry.takeDamage(1);
	jerry.beRepaired(1);
	jerry.takeDamage(100);
	jerry.beRepaired(100);
	
	COUT << "\n******************************************************************\n\n";

	tom.highFivesGuys();
	tom.attack("Jerry");
	tom.takeDamage(1);
	tom.beRepaired(50);
	tom.takeDamage(200);
	tom.attack("Jerry");

	COUT << "\n\n";
	return 0;
}