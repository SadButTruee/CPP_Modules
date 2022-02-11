/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:52:05 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/09 19:06:29 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

#define COUT std::cout
#define ENDL std::endl
#define STRING std::string

#define BLUE	"\033[0;34m"
#define PURPLE	"\033[0;35m"
#define RED		"\033[0;31m"
#define GREEN	"\033[0;32m"
#define SEA		"\033[0;36m"  
#define RESET	"\033[0m"

class WrongCat : public WrongAnimal
{
	public:

		WrongCat();
		WrongCat(const WrongCat& C);
		WrongCat & operator = (const WrongCat& C);
		~WrongCat();
		
		STRING	getType() const;
		void	makeSound()const;
		
	private:

		STRING type;
		
};

#endif