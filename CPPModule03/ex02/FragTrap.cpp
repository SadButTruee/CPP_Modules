/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:45:09 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/08 17:46:37 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
	this->Hit = 100;
	this->Energy = 100;
	this->Damage = 30;
	COUT << GREEN << "FragTrap hit points = 100 " << RESET << ENDL;
	COUT << BLUE << "FragTrap energy points = 100 " << RESET << ENDL;
	COUT << PURPLE << "FragTrap damage = 30 " << RESET << ENDL;
	COUT << "Default FragTrap constructor called" << ENDL;
}

FragTrap::FragTrap(STRING name) : ClapTrap(name){
	this->name = name;
	this->Hit = 100;
	this->Energy = 100;
	this->Damage = 30;
	COUT << GREEN << "FragTrap " << name << " hit points = 100 " << RESET << ENDL;
	COUT << BLUE << "FragTrap " << name << " energy points = 100 " << RESET << ENDL;
	COUT << PURPLE << "FragTrap " << name << " damage = 30 " << RESET << ENDL;
	COUT << "FragTrap constructor with " << this->name << " called." << ENDL;
}
FragTrap::FragTrap(const FragTrap& CT){
	name = CT.name;
	Hit = CT.Hit;
	Energy = CT.Energy;
	Damage = CT.Damage;
	COUT << "Copy FragTrap constructor is called" << ENDL;
}

FragTrap& FragTrap::operator=(const FragTrap& CT){
	name = CT.name;
	Hit = CT.Hit;
	Energy = CT.Energy;
	Damage = CT.Damage;
	COUT << "FragTrap assignation operator is called" << ENDL;
	return (*this);
}

FragTrap::~FragTrap()
{
	COUT << "Default FragTrap destructor with " << this->name << " called." << ENDL;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << SEA <<  "FragTrap: " << this->name << " calls for a high five!" << RESET << ENDL;
	return;
}