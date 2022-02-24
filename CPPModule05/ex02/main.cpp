/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:16:34 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/18 17:10:27 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int	main(void)
{
	// try
	// {
	// 	Bureaucrat Sar("Sar", 3);
	// 	ShrubberyCreationForm a("school");
	// 	Sar.signForm(a);
	// 	Sar.executeForm(a);
	// }
	// catch (std::exception & e)
	// {
	// 	COUT << RED << e.what() << RESET << ENDL;
	// }

	// try
	// {
	// 	Bureaucrat Sar("Sar", 3);
	// 	RobotomyRequestForm a("school");

	// 	Sar.signForm(a);
	// 	Sar.executeForm(a);
	// }
	// catch (std::exception & e)
	// {
	// 	COUT << e.what() << ENDL;
	// }

	try
	{
		Bureaucrat Sar("Sar", 3);
		PresidentialPardonForm a("school");
		Sar.signForm(a);
		Sar.executeForm(a);
	}
	catch (std::exception & e)
	{
		COUT<< e.what() << ENDL;
	}

	return (0);
}