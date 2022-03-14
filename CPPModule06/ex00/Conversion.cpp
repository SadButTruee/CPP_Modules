/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:26:59 by rtracee           #+#    #+#             */
/*   Updated: 2022/03/12 16:03:57 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(void){}

Conversion::Conversion(char *arg){
	int i;
	int j;

	i = 0;
	while (arg[i] && arg[i] != '.')
		i++;
	if (!arg[i])
		precision = 1;
	else
	{
		j = 1;
		while (arg[j + i] && isdigit(arg[j + i]))
			j++;
		precision = j - 1;
	}
}

Conversion::Conversion(Conversion const & src){*this = src;}

Conversion::~Conversion(void){}

Conversion &	Conversion::operator=(Conversion const & C){
	if (this == &C)
		return (*this);
	precision = C.getprecision();
	return (*this);
}

int	Conversion::getprecision(void) const{
	return (this->precision);
}

void	Conversion::isChar(double arg) const{
	char	c = static_cast<char>(arg);

	if (arg >= 32 && arg <= 126)
		COUT << GREEN << "char: '" << c << "'" << RESET<< ENDL ;
	else if ((arg >= 0 && arg < 32) || arg == 127)
		COUT << PURPLE << "char: Non displayable" << RESET << ENDL ;
	else
		COUT << RED << "char: impossible" << RESET << ENDL;
}

void	Conversion::isInt(double arg) const{
	long	i = static_cast<long>(arg);

	if (std::isnan(arg) || std::isinf(arg))
		COUT << RED << "int: impossible" << RESET << ENDL;
	else if (i >= INT_MIN && i <= INT_MAX)
		COUT << GREEN << "int: " << i << RESET << ENDL;
	else
		COUT << RED << "int: impossible" << RESET << ENDL;
}

void	Conversion::isFloat(double arg) const{
	COUT << GREEN <<  "float : " << std::setprecision(this->precision) << std::fixed << static_cast<float>(arg) << 'f' << RESET << ENDL;
}

void	Conversion::isDouble(double arg) const{
	COUT << GREEN << "double : " << std::setprecision(this->precision) << std::fixed << arg << RESET << ENDL;
}