/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:58:18 by rtracee           #+#    #+#             */
/*   Updated: 2022/03/13 16:58:10 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easy_find.hpp"

int	main(void)
{
	std::vector<int>	vec;

	vec.push_back(28);
	vec.push_back(20);
	vec.push_back(21);

	std::vector<int>::const_iterator	it1 = easyfind(vec, 28);
	// COUT << *it1 << ENDL;
	// COUT << *vec.end() << ENDL;
	if (*it1 != *vec.begin())
		COUT << RED << "Error" << RESET << ENDL;
	else
	 	COUT << GREEN << *it1 << RESET << ENDL;

	COUT << "\n**********************************************************\n";
	
	std::list<int>	l;

	l.push_back(28);
	l.push_back(20);
	l.push_back(21);
	std::list<int>::const_iterator	i = easyfind(l, 28);
	if (*i != *l.begin())
		COUT << RED << "Error" << RESET << ENDL;
	else
		COUT << GREEN <<  *i << RESET << ENDL;
	return(0);
}

