/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:08:33 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/06 16:38:44 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

#define COUT std::cout
#define ENDL std::endl

class Fixed
{
	public:

		Fixed();
		Fixed(const Fixed& Fix);
		Fixed & operator = (const Fixed& Fix);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw); 

	private:

		int					num;
		static const int	f;
};

#endif