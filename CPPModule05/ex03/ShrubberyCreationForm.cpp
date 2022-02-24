/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:24:24 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/18 16:04:48 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreation", 145, 137), target("defaut"){}

ShrubberyCreationForm::ShrubberyCreationForm(STRING const & S) : Form("ShrubberyCreation", 145, 137), target(S){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & S) : Form(S), target(S.getTarget()){}

ShrubberyCreationForm::~ShrubberyCreationForm(void){}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & S)
{
	if (this == &S)
		return (*this);
	target = S.getTarget();
	return (*this);
}

std::string const &	ShrubberyCreationForm::getTarget(void) const
{
	return (this->target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & B) const
{
if (B.getGrade() > this->getGradeEx())
		throw Form::GradeTooLowException();

	if (!this->getSign())
		throw Form::UnsignedFormException();
		
	STRING		name_file(this->getTarget());
	std::ofstream	outfile((name_file.append("_shrubbery")));

	if(!outfile) {
		std::cerr << "Could`t open " << name_file << ENDL;
		return ;
	}

	outfile <<"			*\n" 
       		<<"		    |\n"                  
       		<<"		   *|O*\n"
      		<<"		  **|***\n"
     		<<"		 X$O|**X*\n"
			<<"		*$X*|*X***\n"
   			<<"	   O$*/X|**O*X*\n"             
  		    <<"	  *$O/X/|*X*O***\n"
 		    <<"	 X*O**/X|O*X*$*O*\n"
		 	<<"	O*X**/O/|*X*$*O*X*\n"
        	<<"		   |X|\n"      
        	<<"		   |X|\n";
}