/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:16:34 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/18 12:51:23 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	COUT << "*********************************************************\n\n";
	try
	{
		Bureaucrat Sar("Sar", 10);
		Form s("school 42", 20, 100);
		COUT << s << ENDL;
		Sar.signForm(s);
		COUT << s << ENDL;
	}
	catch (std::exception & e)
	{
		COUT << e.what() << ENDL;
	}

	COUT << "*********************************************************\n\n";
	try
	{
		Bureaucrat Sar1("Sar", 10);
		Form s1("school 42", 5, 100);
		
		Sar1.signForm(s1);
	}
	catch (std::exception & e)
	{
		COUT << e.what() << ENDL;
	}

	COUT << "*********************************************************\n\n";
	
	try
	{
		Form c("school 21", 0, 100);

		COUT << GREEN << c << RESET << ENDL;
	}
	catch (std::exception & e)
	{
		COUT << RED << e.what() << RESET << ENDL;
	}

	return (0);
}