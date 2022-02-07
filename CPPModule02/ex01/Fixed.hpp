/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:46:50 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/06 19:08:46 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

#define COUT std::cout
#define ENDL std::endl

class Fixed
{
	public:

		Fixed();
		Fixed(const int a);
		Fixed(const float a);
		
		Fixed(const Fixed& Fix);
		Fixed & operator = (const Fixed& Fix);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

	private:

		int					num;
		static const int	f = 8;
};

std::ostream& operator<< (std::ostream& sar, const Fixed& fixed);

#endif