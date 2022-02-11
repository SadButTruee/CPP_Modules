/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:57:51 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/09 18:59:10 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
	this->type = "WrongCat";
	COUT << "WrongCat default constructor called" << ENDL;
}

WrongCat::WrongCat(const WrongCat& C){
	*this = C;
	COUT <<"WrongCat copy constructor called\n";
}

WrongCat& WrongCat::operator=(const WrongCat& C){
	if (this != & C)
		this->type = C.type;
	COUT << "WrongCatassignation operator called\n";
	return *this;
}

WrongCat::~WrongCat(){
	COUT << "WrongCat defaulat destructor called\n";
}

STRING WrongCat::getType ()const{
	return this->type;
}

void	WrongCat::makeSound()const{
	COUT << "WrongCat: woof\n";
}