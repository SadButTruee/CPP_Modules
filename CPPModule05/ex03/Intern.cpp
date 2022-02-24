/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:16:26 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/18 18:13:56 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(Intern const & src){}

Intern::~Intern(){}

Intern &	Intern::operator=(Intern const & I)
{
	return (*this);
}

Form	*Intern::makeForm(STRING form, STRING target)
{
	int		i = 0;
	STRING	forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	while (i < 3)
	{
		if (forms[i] == form)
			break;
		i++;
	}
	if (i < 3)
		COUT << GREEN << "Intern creates " << forms[i] << " form" << RESET << ENDL;
	else
		COUT << RED << "Error: the form does not exist\n" << ENDL;
	switch (i)
	{
		case 0: 
			return (new ShrubberyCreationForm(target)); 
			break;
		case 1: 
			return (new RobotomyRequestForm(target));
			break;
		case 2: 
			return (new PresidentialPardonForm(target)); 
			break;
		default:;
	}
	return (0);
}