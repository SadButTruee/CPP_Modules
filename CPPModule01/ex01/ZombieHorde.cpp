/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 13:33:57 by rtracee           #+#    #+#             */
/*   Updated: 2022/01/30 14:41:56 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"

Zombie*	zombieHorde(int N, std::string name)
{
	int		i;
	Zombie* sar = new Zombie[N];

	i = 0;
	while (i < N)
	{
		sar[i].setSar(name);
		i++;
	}
	return (sar);
}