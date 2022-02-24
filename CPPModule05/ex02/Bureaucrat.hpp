/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:14:34 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/18 15:51:20 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

#define COUT std::cout
#define ENDL std::endl
#define STRING std::string

#define BLUE	"\033[0;34m"
#define PURPLE	"\033[0;35m"
#define RED		"\033[0;31m"
#define GREEN	"\033[0;32m"
#define SEA		"\033[0;36m"  
#define RESET	"\033[0m"

class Form;

class Bureaucrat
{
	public:

		Bureaucrat();
		Bureaucrat(STRING name, int grade);
		Bureaucrat(const Bureaucrat& B);
		Bureaucrat & operator = (const Bureaucrat& B);
		~Bureaucrat(); 

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();	
		};

		int				getGrade()const;
		const STRING	getName()const;
		void			inc_grade();
		void			dec_grade();
		void			signForm(Form& form);
		void			executeForm(Form const & form);
		
		
	private:

		const STRING	name;
		int				grade;
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& B);

#endif