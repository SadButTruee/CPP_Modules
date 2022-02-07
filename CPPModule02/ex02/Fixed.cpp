/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 12:14:06 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/07 13:46:32 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->num = 0;
	//COUT << "Default constructor called" << ENDL;
}

Fixed::Fixed(const int a)
{
	this->num = a * 256; 
	//COUT << "Int constructor called" << ENDL;
}

Fixed::Fixed(const float a)
{
	this->num = (int)roundf(a * 256); 
	//COUT << "Float constructor called" << ENDL;
}

Fixed::~Fixed()
{
	//COUT << "Destructor called" << ENDL;
}

Fixed& Fixed::operator= (const Fixed& Fix)
{
	this->num = Fix.getRawBits();
	//COUT << "Copy assignment operator called" << ENDL;
	return (*this);
}

Fixed::Fixed(const Fixed& Fix)
{
	//COUT << "Copy constructor called" << ENDL;
	//this->num = Fix.getRawBits();
	*this = Fix;
}

int Fixed::getRawBits(void) const
{
	return (num);
}

void Fixed::setRawBits(int const raw)
{
	this->num = raw;
}

float Fixed::toFloat(void) const
{
	float m;
	//this->num = this->num / 256;
	m = (float)this->num / (float)(256);
	
	return (m);
}

int Fixed::toInt(void) const
{
	int c;

	c = this->num / 256;

	return (c);
}

std::ostream& operator<< (std::ostream& sar, const Fixed& fixed)
{
	sar << fixed.toFloat();
	return (sar);
}

bool Fixed::operator> (const Fixed& Fix) const
{
	return (this->num > Fix.getRawBits());
}

bool Fixed::operator< (const Fixed& Fix) const
{
	return (this->num < Fix.getRawBits());
}

bool Fixed::operator>= (const Fixed& Fix)
{
	return (this->num >= Fix.getRawBits());
}

bool Fixed::operator<= (const Fixed& Fix)
{
	return (this->num <= Fix.getRawBits());
}

bool Fixed::operator== (const Fixed& Fix)
{
	return (this->num == Fix.getRawBits());
}

bool Fixed::operator!= (const Fixed& Fix)
{
	return (this->num != Fix.getRawBits());
}

Fixed Fixed::operator-(const Fixed &rhs)
{
    Fixed   res;

    res.setRawBits(this->num - rhs.getRawBits());
    return res;
}

Fixed Fixed::operator+(const Fixed &rhs)
{
    Fixed   res;

    res.setRawBits(this->num + rhs.getRawBits());
    return res;
}

Fixed Fixed::operator*(const Fixed &rhs)
{
    Fixed   res;
	float	f;

    res.setRawBits(this->num * rhs.getRawBits());
	f = res.toFloat();
	res.setRawBits(f);
    return res;
}

Fixed Fixed::operator/(const Fixed &rhs)
{
    Fixed   res;

    res.setRawBits(this->num / rhs.getRawBits());
    return res;
}

Fixed& Fixed::operator++ ()
{  
	this->setRawBits(++num);
	return (*this);
}

Fixed Fixed::operator++ (int)
{  
	Fixed def = *this;
	this->setRawBits(++num);
	return (def);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return a;
	return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return a;
	return b;
}