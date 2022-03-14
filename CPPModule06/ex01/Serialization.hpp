/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:39:46 by rtracee           #+#    #+#             */
/*   Updated: 2022/03/12 17:27:11 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

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


struct Data
{
	int			i;
	char		c;
	STRING		s;
};

#endif