/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:12:31 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/09 18:29:04 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	this->type = "Cat";
	COUT << "Cat default constructor called" << ENDL;
}

Cat::Cat(const Cat& C){
	*this = C;
	COUT <<"Cat copy constructor called\n";
}

Cat& Cat::operator=(const Cat& C){
	if (this != & C)
		this->type = C.type;
	COUT << "Cat assignation operator called\n";
	return *this;
}

Cat::~Cat(){
	COUT << "Cat defaulat destructor called\n";
}

STRING Cat::getType ()const{
	return this->type;
}

void	Cat::makeSound()const{
	COUT << "Cat: meow\n";
}