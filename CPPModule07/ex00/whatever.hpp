/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 22:45:45 by rtracee           #+#    #+#             */
/*   Updated: 2022/03/12 23:10:42 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WHATEVER_TPP
# define WHATEVER_TPP

# include <iostream>

#define COUT std::cout
#define ENDL std::endl
#define STRING std::string


template<typename S>
void	swap(S& a, S& b){
	S	tmp = a;

	a = b;
	b = tmp;
}

template<typename S>
S const &	min(S&  a, S& b){
	return (a < b ? a : b);
}

template<typename S>
S const &	max(S& a, S& b){
	return (a > b ? a : b);
}

#endif