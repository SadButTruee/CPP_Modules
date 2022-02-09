/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:07:06 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/09 12:36:24 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	this->Hit = 100;
	this->Energy = 50;
	this->Damage = 20;
	COUT << "Default ScavTrap constructor called" << ENDL;
}

ScavTrap::ScavTrap(STRING name) : ClapTrap(name){
	this->name = name;
	this->Hit = 100;
	this->Energy = 50;
	this->Damage = 20;
	COUT << GREEN << "ScavTrap " << name << " hit points = " << this->Hit << RESET << ENDL;
	COUT << BLUE << "ScavTrap " << name << " energy points = "<< this->Energy << RESET << ENDL;
	COUT << PURPLE << "ScavTrap " << name << " damage = " << this->Damage << RESET << ENDL;
	COUT << "ScavTrap constructor with " << this->name << " called." << ENDL;
}
ScavTrap::ScavTrap(const ScavTrap& CT){
	name = CT.name;
	Hit = CT.Hit;
	Energy = CT.Energy;
	Damage = CT.Damage;
	COUT << "Copy ScavTrap constructor is called" << ENDL;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& CT){
	name = CT.name;
	Hit = CT.Hit;
	Energy = CT.Energy;
	Damage = CT.Damage;
	COUT << "ScavTrap assignation operator is called" << ENDL;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	COUT << "Default ScavTrap destructor with " << this->name << " called." << ENDL;
}

void ScavTrap::attack(std::string const &target)
{
	if (this->Hit <= 0){
		COUT << this->name << " is dead and can't attack" << ENDL;
		return;
	}
	if (this->Energy <= 0){
		COUT << this->name << " is exhausted and can't attack" << ENDL;
		return;
	}
	COUT << this->name << " attacks " << target << " and causes " << this->Damage << " points of damage.";
	--this->Energy;
	COUT << this->name << " energy = " << this->Energy << ENDL;
}

void ScavTrap::guardGate() {
	COUT  << this->name << " have enterred in Gate keeper mode\n";
}

int ScavTrap::getEnargy(void){
	return (this->Energy);
}