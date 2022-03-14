/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:22:02 by rtracee           #+#    #+#             */
/*   Updated: 2022/03/12 16:02:41 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <cmath>
# include <climits>
# include <iomanip>

#define COUT std::cout
#define ENDL std::endl
#define STRING std::string

#define BLUE	"\033[0;34m"
#define PURPLE	"\033[0;35m"
#define RED		"\033[0;31m"
#define GREEN	"\033[0;32m"
#define SEA		"\033[0;36m"  
#define RESET	"\033[0m"

class Conversion
{

	public:

	Conversion(void);
	Conversion(char *arg);
	Conversion(Conversion const & C);
	~Conversion(void);

	Conversion &	operator=(Conversion const & C);

	int		getprecision(void) const;
	void	isChar(double arg) const;
	void	isInt(double arg) const;
	void	isFloat(double arg) const;
	void	isDouble(double arg) const;

	private:
	
	int		precision;
};

#endif