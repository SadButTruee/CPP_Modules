/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:02:27 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/18 17:01:55 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Form.hpp"
# include <ctime>

#define COUT std::cout
#define ENDL std::endl
#define STRING std::string

#define BLUE	"\033[0;34m"
#define PURPLE	"\033[0;35m"
#define RED		"\033[0;31m"
#define GREEN	"\033[0;32m"
#define SEA		"\033[0;36m"  
#define RESET	"\033[0m"

class RobotomyRequestForm : public Form
{

public:

	RobotomyRequestForm(void);
	RobotomyRequestForm(STRING const & S);
	RobotomyRequestForm(RobotomyRequestForm const & R);
	~RobotomyRequestForm(void);

	RobotomyRequestForm &	operator=(RobotomyRequestForm const & R);

	STRING const&	getTarget(void) const;
	void			execute(Bureaucrat const & B) const;

private:

	STRING	target;

};