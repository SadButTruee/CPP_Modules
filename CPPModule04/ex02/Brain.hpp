/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:53:17 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/10 15:08:25 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

#define COUT std::cout
#define ENDL std::endl
#define STRING std::string

#define BLUE	"\033[0;34m"
#define PURPLE	"\033[0;35m"
#define RED		"\033[0;31m"
#define GREEN	"\033[0;32m"
#define SEA		"\033[0;36m"  
#define RESET	"\033[0m"

class Brain
{
	public:

		Brain();
		Brain(const Brain& A);
		Brain & operator = (const Brain& A);
		virtual ~Brain();

		void p_idea(int);

	private:

		STRING ideas[100];
				
};
#endif