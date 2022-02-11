/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:01:11 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/10 11:41:35 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	this->type = "Dog";
	COUT << "Dog default constructor called" << ENDL;
}

Dog::Dog(const Dog& D){
	*this = D;
	COUT <<"Dog copy constructor called\n";
}

Dog& Dog::operator=(const Dog& D){
	if (this != & D)
		this->type = D.type;
	COUT << "Dog assignation operator called\n";
	return *this;
}

Dog::~Dog(){
	COUT << this->type << " defaulat destructor called\n";
}

STRING Dog::getType ()const{
	return this->type;
}

void	Dog::makeSound()const{
	COUT << "Dog: woof!\n";
}
