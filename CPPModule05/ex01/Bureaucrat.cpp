/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:23:16 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/18 12:32:23 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(STRING name, int grade) : name(name), grade(grade){
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}	

Bureaucrat::Bureaucrat(const Bureaucrat& B) : name(B.getName()), grade(B.getGrade()){}

Bureaucrat& Bureaucrat::operator= (const Bureaucrat& B){
	if (this == &B)
		return (*this);
	this->grade = B.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat(){}

int	Bureaucrat::getGrade()const{return grade;}

const STRING	Bureaucrat::getName()const{return name;}

void	Bureaucrat::inc_grade(){
	grade--;
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

void	Bureaucrat::dec_grade(){
	grade++;
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& B){
	out << SEA << B.getName() << "  bureaucrat grade = " << B.getGrade() << RESET << ENDL;
	return (out);
}

const char* Bureaucrat::GradeTooHighException::what()const throw(){
	return "The grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what()const throw(){
	return "The grade is too low";
}

void	Bureaucrat::signForm(Form& form){
	if (this->grade <= form.getGradeSign())
	{
		form.beSigned(*this);
		COUT << GREEN << this->name << " signed " << form.getName() << RESET << ENDL;
	}
	else
		COUT << RED << this->name << " didn't sign " << form.getName() << " because his grade is too low" << RESET << ENDL;
}