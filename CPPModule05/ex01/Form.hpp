/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:59:45 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/18 14:22:57 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

#define COUT std::cout
#define ENDL std::endl
#define STRING std::string

#define BLUE	"\033[0;34m"
#define PURPLE	"\033[0;35m"
#define RED		"\033[0;31m"
#define GREEN	"\033[0;32m"
#define SEA		"\033[0;36m"  
#define RESET	"\033[0m"

class Bureaucrat;

class Form
{
	public:

		Form();
		Form(STRING const & name, int Sign, int Exec);
		Form(const Form& F);
		Form & operator = (const Form& F);
		~Form(); 
		
		STRING const &	getName(void) const;
		bool			getSign(void) const;
		int const &		getGradeSign(void) const;
		int const &		getGradeEx(void) const;

		void			beSigned(Bureaucrat const & b);

		class GradeTooHighException : public std::exception
		{
			public:
				const char	*what(void) const throw();
		};
		class GradeTooLowException : public std::exception
		{	
			public:
				const char	*what(void) const throw();
		};
	
		
		
	private:

		const STRING	name;
		bool			sign;
		const int		grade_sign;
		const int		grade_ex;	
		
};

std::ostream &	operator<<(std::ostream & out, Form const & rhs);

#endif