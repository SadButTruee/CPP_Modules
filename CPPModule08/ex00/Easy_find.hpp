/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easy_find.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:03:00 by rtracee           #+#    #+#             */
/*   Updated: 2022/03/14 11:53:53 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <list>
# include <vector>

#define COUT std::cout
#define ENDL std::endl
#define STRING std::string

#define BLUE	"\033[0;34m"
#define PURPLE	"\033[0;35m"
#define RED		"\033[0;31m"
#define GREEN	"\033[0;32m"
#define SEA		"\033[0;36m"  
#define RESET	"\033[0m"


template<typename T>
typename T::const_iterator	easyfind(T const & container, int value){
	typename T::const_iterator	iterator;

	iterator = find(container.begin(), container.end(), value);
	return (iterator);
}

#endif