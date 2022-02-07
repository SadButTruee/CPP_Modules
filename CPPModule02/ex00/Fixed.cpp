/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:12:49 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/06 16:38:58 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->num = 0;
	COUT << "Default constructor called" << ENDL;
}

Fixed::~Fixed()
{
	COUT << "Destructor called" << ENDL;
}

Fixed& Fixed::operator= (const Fixed& Fix)
{
	COUT << "Copy assignment operator called" << ENDL;
	this->num = Fix.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed& Fix)
{
	COUT << "Copy constructor called" << ENDL;
	this->num = Fix.getRawBits();
}

int Fixed::getRawBits(void) const
{
	COUT << "getRawBits member function called" << ENDL;
	return (0);
}

void Fixed::setRawBits(int const raw)
{
	this->num = raw;
}