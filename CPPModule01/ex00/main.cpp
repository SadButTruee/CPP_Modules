/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 10:31:25 by rtracee           #+#    #+#             */
/*   Updated: 2022/01/30 13:21:34 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"

int	main()
{
	Zombie	sar("Sar");
	Zombie*	sar2 = new Zombie("Sar2");
	Zombie*	sar3;

	sar3 = newZombie("Sar3");
	sar.announce();
	sar2->announce();
	sar3->announce();

	delete sar2;
	delete sar3;

	randomChump("Sar4");
	return 0;
}