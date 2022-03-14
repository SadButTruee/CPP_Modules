/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:28:06 by rtracee           #+#    #+#             */
/*   Updated: 2022/03/12 18:05:22 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>


#define COUT std::cout
#define ENDL std::endl
#define STRING std::string

#define BLUE	"\033[0;34m"
#define PURPLE	"\033[0;35m"
#define RED		"\033[0;31m"
#define GREEN	"\033[0;32m"
#define SEA		"\033[0;36m"  
#define RESET	"\033[0m"

class Base
{
	public:
		virtual ~Base(void);
};

#endif