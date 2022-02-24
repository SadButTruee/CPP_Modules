/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:43:42 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/18 15:47:03 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardon", 25, 5), target("defaut"){}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : Form("PresidentialPardon", 25, 5), target(target)
{
	std::cout << "PresidentialPardonForm parameter constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & P) : Form(P), target(P.getTarget()){}

PresidentialPardonForm::~PresidentialPardonForm(void){}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const & P)
{
	if (this == &P)
		return (*this);
	target = P.getTarget();
	return (*this);
}

std::string const &	PresidentialPardonForm::getTarget(void) const
{
	return (this->target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & B) const
{
	if (B.getGrade() > this->getGradeEx())
		throw Form::GradeTooLowException();

	if (!this->getSign())
		throw Form::UnsignedFormException();
	COUT << PURPLE << this->getTarget() << " has been pardoned by Zaphod Beeblebrox\n";
}