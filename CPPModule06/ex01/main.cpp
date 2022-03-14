/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:45:05 by rtracee           #+#    #+#             */
/*   Updated: 2022/03/12 17:26:13 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	struct Data	data;
	struct Data	*sar;
	uintptr_t	value;

	data.i = 28;
	data.c = 'S';
	data.s = "school";
	value = serialize(&data);
	sar = deserialize(value);
	if (sar == &data)
		COUT << GREEN<< "SUCCESS" << RESET << ENDL;
	else
		COUT << RED << "FAILURE" << RESET << ENDL;
	COUT << "values are: " << value << ENDL;
	COUT << "int: " << sar->i << ENDL;
	COUT << "char: " << sar->c << ENDL;
	COUT << "string: " << sar->s << ENDL;
	return (0);
}