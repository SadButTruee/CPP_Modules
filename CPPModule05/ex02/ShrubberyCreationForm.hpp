/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:24:35 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/18 14:38:49 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include "Form.hpp"

#define COUT std::cout
#define ENDL std::endl
#define STRING std::string

#define BLUE	"\033[0;34m"
#define PURPLE	"\033[0;35m"
#define RED		"\033[0;31m"
#define GREEN	"\033[0;32m"
#define SEA		"\033[0;36m"  
#define RESET	"\033[0m"

class ShrubberyCreationForm : public Form
{

public:

	ShrubberyCreationForm();
	ShrubberyCreationForm(STRING const & S);
	ShrubberyCreationForm(ShrubberyCreationForm const & S);
	~ShrubberyCreationForm();

	ShrubberyCreationForm &	operator=(ShrubberyCreationForm const & S);

	STRING const&		getTarget() const;
	virtual void		execute(Bureaucrat const & B) const;

private:

	STRING	target;

};

#endif