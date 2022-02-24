/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:00:01 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/18 14:25:53 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default"), sign(false), grade_sign(28), grade_ex(28){}

Form::Form(STRING const & name, int Sign, int Exec) : name(name), sign(false), grade_sign(Sign), grade_ex(Exec)
{
	if (this->grade_sign < 1 || this->grade_ex < 1)
		throw Form::GradeTooHighException();
	if (this->grade_sign > 150 || this->grade_ex > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& F) : name(F.getName()), sign(F.getSign()), grade_sign(F.getGradeSign()), grade_ex(F.getGradeEx()){}

Form&	Form::operator=(Form const & F)
{
	if (this == &F)
		return (*this);
	sign = F.getSign();
	return (*this);
}

Form::~Form(){}

void	Form::beSigned(Bureaucrat const & b){
	if (b.getGrade() <= this->grade_sign)
		this->sign = true;
	else
		throw Form::GradeTooLowException();
}

STRING const &	Form::getName(void) const{return (this->name);}

bool	Form::getSign(void) const{return (this->sign);}

int const &	Form::getGradeSign(void) const{return (this->grade_sign);}

int const &	Form::getGradeEx(void) const{return (this->grade_ex);}

const char	*Form::GradeTooHighException::what(void) const throw()
{
	return ("The grade too high");
}

const char	*Form::GradeTooLowException::what(void) const throw()
{
	return ("The grade too low");
}

const char	*Form::UnsignedFormException::what(void) const throw()
{
	return "Form is unsigned";
}

std::ostream &	operator<<(std::ostream & out, Form const & F)
{

	if (F.getSign())
		out << SEA << "Form " << F.getName() << " signed, grade to sign: "<< F.getGradeSign() << ", grade to execute: " << F.getGradeEx()<< RESET << ENDL;
	else
	out << SEA << "Form " << F.getName() << " not signed, grade to sign: "<< F.getGradeSign() << ", grade to execute: " << F.getGradeEx()<< RESET << ENDL;
	return (out);
}