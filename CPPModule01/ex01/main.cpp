/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 13:32:27 by rtracee           #+#    #+#             */
/*   Updated: 2022/01/30 15:21:53 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"

int	main()
{
	int		i;
	int		j;
	Zombie* sar;

	j = 0;
	i = 11;
	sar = zombieHorde(i, "Sar");
	while(j < i)
	{
		std::cout << "Zombie №" << j + 1 << " name is: " << sar[j].getSar() << std::endl;
		std::cout << "Zombie №" << j + 1 << " ";
		sar[j].announce();
		j++;
	}
	delete  [] sar;
	return 0;
}