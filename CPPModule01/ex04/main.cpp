/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 11:15:30 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/03 13:16:43 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed_is_for_losers.h"

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (ft_error(1));

	std::ifstream	in_file(argv[1]);
	if(!in_file)
		return (ft_error(2));

	std::string		name_file(argv[1]);
	std::ofstream	out_file(name_file.append(".replace"));

	std::string		s1(argv[2]);
	std::string		s2(argv[3]);
	if (s1.empty() || s2.empty())
		return (ft_error(3));

	std::string		str;

	while (std::getline(in_file, str))
	{
		std::string& line = str;
		ft_search_replace(line, s1, s2);
		out_file << line;
		if (in_file.eof())
			break ;
		out_file << std::endl;
	}

}