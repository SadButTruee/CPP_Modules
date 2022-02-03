/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:21:19 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/03 16:57:00 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

static int	ft_filter(std::string str)
{
	if (str == "DEBUG")
		return 1;
	if (str == "INFO")
		return 2;
	if (str == "WARNING")
		return 3;
	if (str == "ERROR")
		return 4;
	return 5;
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: incorrect number of arguments" << std::endl;
		return 0;
	}

	Karen	Kar;
	int		i;

	i = ft_filter(argv[1]);
	//while (i < 4)
	switch (i)
	{
		case 1:
			Kar.complain("DEBUG");
			Kar.complain("INFO");
			Kar.complain("WARNING");
			Kar.complain("ERROR");
			break ;
		case (2):
			Kar.complain("INFO");
			Kar.complain("WARNING");
			Kar.complain("ERROR");
			break ;
		case (3):
			Kar.complain("WARNING");
			Kar.complain("ERROR");
			break;
		case (4):
			Kar.complain("ERROR");
			break;
		case (5):
			std::cout << "Error: incorrect argument" << std::endl;
			break;
		default:
			break;
	}

	return 0;
}