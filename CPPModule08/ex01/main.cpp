/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 17:34:31 by rtracee           #+#    #+#             */
/*   Updated: 2022/03/13 18:23:08 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() 
{
	// Span sp = Span(5);
	// sp.addNumber(6);
	// sp.addNumber(3);
  	// sp.addNumber(17);
  	// sp.addNumber(9);
  	// sp.addNumber(11);
  	// std::cout << sp.shortestSpan() << std::endl;
  	// std::cout << sp.longestSpan() << std::endl;
	
	// return 0;

	Span	a(100);

	try
	{
		COUT << a.longestSpan() << ENDL;
	}
	catch (std::exception & e)
	{
		COUT << RED <<  e.what() << RESET << ENDL;
	}

	a.addNumber(6);
	a.addNumber(3);
	a.addNumber(17);
	a.addNumber(9);
	a.addNumber(11);

	Span	b(a);
	
	COUT << b.shortestSpan() << ENDL;
	COUT << b.longestSpan() << ENDL;
	
	COUT << b.size() << ENDL;
	b.addRange(100);
	COUT << b.size() << ENDL;
	b.printContent();

	COUT << b.shortestSpan() << ENDL;
	COUT << b.longestSpan() << ENDL;
	b.max_el();
	b.min_el();
	try{
		b.addNumber(45);
	}
	catch (std::exception & e){
		COUT << RED << e.what() << RESET << ENDL;
	}
	return (0);
}