/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:38:16 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/08 21:49:43 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
	COUT << "Default DiamondTrap constructor called\n";
}

DiamondTrap::DiamondTrap(std::string const name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name){
	this->name = name;
	this->Hit = FragTrap::Hit;
	this->Energy = ScavTrap::Energy;
	this->Damage = FragTrap::Damage;
	COUT << GREEN << "DiamondTrap" << name << " hit points = "<< FragTrap::getHit() << RESET << ENDL;
	COUT << BLUE << "DiamondTrap " << name << " energy points = " << ScavTrap::getEnargy() << RESET << ENDL;
	COUT << PURPLE << "DiamondTrap" << name << " damage " << FragTrap::getDamage() << RESET << ENDL;
	COUT << "DiamondTrap constructor with " << this->name << " called." << ENDL;
}

DiamondTrap::DiamondTrap(DiamondTrap const &other)
{
	COUT <<"DiamondTrap: Copy constructor called\n";
	*this = other;
}

DiamondTrap::~DiamondTrap(void)
{
	COUT << GREEN "DiamondTrap: Destructor called\n";
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &CT)
{

	if (this != &CT)
	{
		name = CT.name;
		Hit = CT.Hit;
		Energy = CT.Energy;
		Damage = CT.Damage;
	}
	std::cout << "DiamondTrap: Assignation operator called\n";
	return *this;
}

void DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void  DiamondTrap::whoAmI(){
	COUT << "My name is " << name << ENDL;
	COUT << "My ClapTrap name is " << ClapTrap::getName() << ENDL;
}