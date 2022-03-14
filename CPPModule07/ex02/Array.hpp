/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 11:32:57 by rtracee           #+#    #+#             */
/*   Updated: 2022/03/13 12:00:45 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

#define COUT std::cout
#define ENDL std::endl
#define STRING std::string

#define BLUE	"\033[0;34m"
#define PURPLE	"\033[0;35m"
#define RED		"\033[0;31m"
#define GREEN	"\033[0;32m"
#define SEA		"\033[0;36m"  
#define RESET	"\033[0m"

template<typename T>
class Array
{

public:

	Array();
	Array(unsigned int n);
	Array(Array const & A);
	virtual ~Array();

	Array &	operator=(Array const & A);
	T &		operator[](unsigned int const & index);

	T &						getElem(unsigned int const & i) const;
	void					setElem(T e);
	unsigned int const &	getSize() const;
	unsigned int const &	count() const;

	static bool	verbose;

private:

	unsigned int	size;
	unsigned int	counter;
	T				*elem;

};

#endif