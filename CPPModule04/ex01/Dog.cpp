/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:01:11 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/10 15:28:27 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	this->type = "Dog";
	this->brain = new Brain;
	COUT << "Dog default constructor called" << ENDL;
}

Dog::Dog(const Dog& D){
	this->type = D.type;
	this->brain = new Brain(*D.brain);
	COUT <<"Dog copy constructor called\n";
}

Dog& Dog::operator=(const Dog& D){
	delete this->brain;
	this->type = D.type;
	this->brain = new Brain(*D.brain);
	COUT << "Dog assignation operator called\n";
	return *this;
}

Dog::~Dog(){
	delete this->brain;
	COUT << this->type << " defaulat destructor called\n";
}

STRING Dog::getType ()const{
	return this->type;
}

void	Dog::makeSound()const{
	COUT << RED << "Dog: woof!\n" << RESET;
}

void	Dog::p_idea(int i){
	COUT << this->getType() << " idea №" << i + 1<< "- ";
	this->brain->p_idea(i);
}
