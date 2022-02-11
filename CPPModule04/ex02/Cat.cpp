/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:12:31 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/10 15:29:47 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	this->type = "Cat";
	this->brain = new Brain;
	COUT << "Cat default constructor called" << ENDL;
}

Cat::Cat(const Cat& C){
	this->type = C.type;
	this->brain = new Brain(*C.brain);
	COUT <<"Cat copy constructor called\n";
}

Cat& Cat::operator=(const Cat& C){
	delete this->brain;
	this->type = C.type;
	this->brain = new Brain(*C.brain);
	COUT << "Cat assignation operator called\n";
	return *this;
}

Cat::~Cat(){
	delete this->brain;
	COUT << "Cat defaulat destructor called\n";
}

STRING Cat::getType ()const{
	return this->type;
}

void	Cat::makeSound()const{
	COUT << SEA << "Cat: meow\n" << RESET;
}

void	Cat::p_idea(int i){
	COUT << this->getType() << " idea №" << i + 1<< "- ";
	this->brain->p_idea(i);
}