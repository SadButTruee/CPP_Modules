/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:52:23 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/10 11:47:11 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

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

class WrongAnimal
{
	public:

		WrongAnimal();
		WrongAnimal(const WrongAnimal& A);
		WrongAnimal & operator = (const WrongAnimal& A);
		virtual ~WrongAnimal(); 

		virtual STRING	getType()const;
		virtual	void	makeSound()const;

	private:

		STRING name;
		
};
#endif