/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:06:45 by rtracee           #+#    #+#             */
/*   Updated: 2022/03/12 15:52:08 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int	main(int argc, char **argv)
{
	if (argc == 1 || argc > 2){
		COUT << RED << "Error: incorrect number of argument"
			<< RESET << ENDL;
		return (1);
	}
	double	arg;
	arg = atof(argv[1]);
	Conversion cnv(argv[1]);

	cnv.isChar(arg);
	cnv.isInt(arg);
	cnv.isFloat(arg);
	cnv.isDouble(arg);
	return (0);
}