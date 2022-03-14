/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 18:38:42 by rtracee           #+#    #+#             */
/*   Updated: 2022/03/14 12:15:07 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>

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
class MutantStack : public std::stack<T>
{

public:

	typedef typename std::deque<T>::iterator iterator;
	
	MutantStack<T>(){}
	MutantStack<T>(MutantStack<T> const & M){this->c = M.c;}
	~MutantStack<T>(){}

	MutantStack<T> &	operator=(MutantStack<T> const & rhs){
		if (this == &rhs)
			return (*this);
		this->c = rhs.c;
		return (*this);
	}

	iterator	begin(){return (std::stack<T>::c.begin());}
	iterator	end(){return (std::stack<T>::c.end());}

};

#endif