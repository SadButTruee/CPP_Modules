/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:01:15 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/09 12:52:20 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Hit(10), Energy(10), Damage(0){
	COUT << "Default ClapTrap constructor called" << ENDL;
}

ClapTrap::ClapTrap(STRING name) : name(name), Hit(10), Energy(10), Damage(0){
	COUT << GREEN << "ClapTrap " << name << " hit points = " << this->Hit << RESET << ENDL;
	COUT << BLUE << "ClapTrap " << name << " energy points = " << this->Energy << RESET << ENDL;
	COUT << PURPLE << "ClapTrap " << name << " damage = " << this->Damage << RESET << ENDL;
	COUT << "ClapTrap constructor with " << this->name << " called." << ENDL;
}
ClapTrap::ClapTrap(const ClapTrap& CT){
	name = CT.name;
	Hit = CT.Hit;
	Energy = CT.Energy;
	Damage = CT.Damage;
	COUT << "Copy ClapTrap constructor is called" << ENDL;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& CT){
	name = CT.name;
	Hit = CT.Hit;
	Energy = CT.Energy;
	Damage = CT.Damage;
	COUT << "ClapTrap assignation operator is called" << ENDL;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	if(this->name.length() > 0)
		COUT << "Default ClapTrap destructor with " << ClapTrap::getName() << " called." << ENDL;
	else
		COUT << "Default ClapTrap destructor with  called." << ENDL;
}

void ClapTrap::attack(const std::string& target){
	if (this->Hit <= 0){
		COUT << this->name << " is dead and can't attack" << ENDL;
		return;
	}
	if (this->Energy <= 0){
		COUT << this->name << " is exhausted and can't attack" << ENDL;
		return;
	}
	COUT << this->name << " attacks " << target << " and causes " << this->Damage << " points of damage." << ENDL;
	--this->Energy;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->Hit <= 0){
		COUT << this->name << " can't do it because " << this->name << " is dead." << ENDL;
		return;
	}
	if (this->Energy <= 0){
		COUT << this-> name <<" can't do it because " << this->name << " is exhausted." << ENDL;
		return;
	}
	this->Hit -= amount;
	COUT << this->name << " deals " << amount << " damage and he has " << this->Hit << " points of hit\n";
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->Hit <= 0){
		COUT << "The action is impossible because " << this->name << " is dead." << ENDL;
		return;
	}
	if (this->Energy <= 0){
		COUT << "The action is impossible because " << this->name << " is exhausted." << ENDL;
		return;
	}
	this->Hit += amount;
	--this->Energy;
	COUT << this->name << " repaired himself and gets " << amount << " hit points back. His points = " << this->Hit << '\n';
}

STRING ClapTrap::getName()const{
	return (this->name + str);
}