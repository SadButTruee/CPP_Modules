/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 23:12:47 by rtracee           #+#    #+#             */
/*   Updated: 2022/03/12 23:26:05 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	int		array[] = {1, 2, 3};
	char	array2[] = {'a', 'b', 'c'};

	COUT << "Print content of array(1, 2, 3) : ";
	::iter(array, 3, ::pri);

	COUT << "\nPrint content of array2(a, b, c) : ";
	::iter(array2, 3, ::pri);

	COUT << "\nIncrement content of array(1, 2, 3) : ";
	::iter(array, 3, ::inc);
	COUT  << array[0] << " " << array[1] << " " << array[2] << " ";

	COUT << "\nIncrement content of array2(a, b, c) : ";
	::iter(array2, 3, ::inc);
	COUT  << array2[0] << " " << array2[1] << " " << array2[2] << " ";

	COUT << "\nDecrement content of array(1, 2, 3) : ";
	::iter(array, 3, ::dec);
	COUT  << array[0] << " " << array[1] << " " << array[2] << " ";

	COUT  << "\nDecrement content of array2(a, b, c) : ";
	::iter(array2, 3, ::dec);
	COUT  << array2[0] << " " << array2[1] << " " << array2[2] << " " << ENDL;

	return (0);
}