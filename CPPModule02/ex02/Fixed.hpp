/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 12:15:35 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/07 13:45:14 by rtracee          ###   ########.fr       */
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
		bool operator > (const Fixed& Fix) const;
		bool operator < (const Fixed& Fix) const;
		bool operator >= (const Fixed& Fix);
		bool operator <= (const Fixed& Fix);
		bool operator == (const Fixed& Fix);
		bool operator != (const Fixed& Fix);
		Fixed operator - (const Fixed& Fix);
		Fixed operator + (const Fixed& Fix);
		Fixed operator * (const Fixed& Fix);
		Fixed operator / (const Fixed& Fix);
		Fixed& operator++ ();
		Fixed operator++ (int);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

		static Fixed& min(Fixed& a, Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static const Fixed&	max(const Fixed& a, const Fixed& b);

	private:

		int					num;
		static const int	f = 8;
};

std::ostream& operator<< (std::ostream& sar, const Fixed& fixed);

#endif