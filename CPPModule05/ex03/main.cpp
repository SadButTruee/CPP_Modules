/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:16:34 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/18 18:16:11 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern	Sar;
	Form	*school;

	// school = Sar.makeForm("robotomy request", "Bender");
	// COUT << *school << ENDL;
	// delete school;

	school = Sar.makeForm("robotom request", "Bender");
	return (0);
}