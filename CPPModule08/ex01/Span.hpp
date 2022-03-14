/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 16:59:09 by rtracee           #+#    #+#             */
/*   Updated: 2022/03/14 12:39:10 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <numeric>
# include <cstdlib>
# include <climits>

#define COUT std::cout
#define ENDL std::endl
#define STRING std::string

#define BLUE	"\033[0;34m"
#define PURPLE	"\033[0;35m"
#define RED		"\033[0;31m"
#define GREEN	"\033[0;32m"
#define SEA		"\033[0;36m"  
#define RESET	"\033[0m"

class Span
{

public:

	Span();
	Span(unsigned int n);
	Span(Span const & S);
	~Span();

	Span &	operator=(Span const & S);

	void				addNumber(int nb);
	void				addRange(int nb);
	unsigned int		shortestSpan();
	unsigned int		longestSpan();
	std::vector<int>	getArray() const;
	unsigned int		getMax() const;
	unsigned int		size() const;
	void				max_el();
	void				min_el();
	void				printContent();
	

private:

	std::vector<int>	array;
	unsigned int		max;

public:

	class fullVector : public std::exception{
		public:
			virtual const char	*what() const throw();
	};
	class notEnoughInt : public std::exception{
		public:
			virtual const char	*what() const throw();
	};

};

#endif