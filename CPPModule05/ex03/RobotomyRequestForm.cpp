/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:01:57 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/18 17:11:26 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequest", 72, 45), target("defaut"){}

RobotomyRequestForm::RobotomyRequestForm(STRING const & target) : Form("RobotomyRequest", 72, 45), target(target){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & R) : Form(R), target(R.getTarget()){}

RobotomyRequestForm::~RobotomyRequestForm(void){}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & R)
{
	if (this == &R)
		return (*this);
	target = R.getTarget();
	return (*this);
}

STRING const &	RobotomyRequestForm::getTarget(void) const
{
	return (this->target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & B) const
{
	
	if (B.getGrade() > this->getGradeEx())
		throw Form::GradeTooLowException();

	if (!this->getSign())
		throw Form::UnsignedFormException();

	srand(time(0));
	int	nbr;

	if ((nbr = rand() % 100) < 50)
		COUT << PURPLE << target << " was robotomized sucсessfully!" << RESET << ENDL;
	else
		COUT << RED << "Failure!" << RESET << ENDL;
	

}