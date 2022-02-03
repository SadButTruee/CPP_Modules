/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed_is_for_losers.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:58:03 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/03 18:00:23 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed_is_for_losers.h"

int	ft_error(int a)
{
	if (a == 1)
		std::cout << "Error: inclorrect number of argumen" << std::endl;
	if (a == 2)
		std::cout << "Error: file not found" << std::endl;
	if (a == 3)
		std::cout << "Error: empty string" << std::endl;
	return (1);
}

void	ft_search_replace(std::string& line, std::string s1, std::string s2)
{
	size_t	i;

	while ((i = line.find(s1)) != std::string::npos)
	{
		line.erase(line.begin() + i, line.begin() + i + s1.length());
		std::cout << i << "	";
		std::cout << line;
		line.insert(i, s2);
		std::cout << std::endl;
	}
}