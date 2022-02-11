/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:12:44 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/10 16:34:01 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	COUT << "Animal default constructor called" << ENDL;
}

Animal::Animal(const Animal& A){
	*this = A;
	COUT <<"Animal copy constructor called\n";
}

Animal& Animal::operator=(const Animal& A){
	if (this != & A){
		name = A.name;
	}
	COUT << "Animal assignation operator called\n";
	return *this;
}

Animal::~Animal(){
	COUT << "Animal defaulat destructor called\n";
}

STRING Animal::getType() const{
	return NULL;
}

void	Animal::makeSound()const{
}

void	Animal::p_idea(int i){
	COUT << "loshara\n";
}