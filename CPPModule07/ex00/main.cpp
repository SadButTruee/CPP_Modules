/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 22:44:09 by rtracee           #+#    #+#             */
/*   Updated: 2022/03/12 23:11:06 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main( void ) 
{
	int a = 2;
	int b = 3;
	
	::swap(a, b);
	COUT << "a = " << a << ", b = " << b << ENDL;
	COUT << "min(a, b) = " << ::min(a, b) << ENDL;
	COUT << "max(a, b) = " << ::max(a, b) << ENDL;
	
	STRING c = "chaine1";
	STRING d = "chaine2";
	
	::swap(c, d);
	
	COUT << "c = " << c << ", d = " << d << ENDL;
	COUT << "min(c, d) = " << ::min(c, d) << ENDL;
	COUT << "max(c, d) = " << ::max(c, d) << ENDL;
	
	return 0; 
}