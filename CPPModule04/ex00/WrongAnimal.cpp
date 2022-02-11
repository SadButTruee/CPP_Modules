/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:56:33 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/09 18:57:35 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	COUT << "WrongAnimal default constructor called" << ENDL;
}

WrongAnimal::WrongAnimal(const WrongAnimal& A){
	*this = A;
	COUT <<"WrongAnimal copy constructor called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& A){
	if (this != & A){
		name = A.name;
	}
	COUT << "WrongAnimal assignation operator called\n";
	return *this;
}

WrongAnimal::~WrongAnimal(){
	COUT << "WrongAnimal defaulat destructor called\n";
}

STRING WrongAnimal::getType() const{
	return NULL;
}

void	WrongAnimal::makeSound()const{
}