/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 23:13:05 by rtracee           #+#    #+#             */
/*   Updated: 2022/03/12 23:24:31 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

#define COUT std::cout
#define ENDL std::endl
#define STRING std::string

template<typename T>
void	pri(T & a)
{
	COUT << a << " ";
}

template<typename T>
void	inc(T & a)
{
	a++;
}

template<typename T>
void	dec(T & a)
{
	a--;
}

template<typename T>
void	iter(T *array, unsigned int length, void (*f)(T &))
{
	for (unsigned int i = 0; i < length; i++)
		(*f)(array[i]);
}

#endif