/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:21:19 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/03 15:34:22 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main()
{
	Karen	Kar;

	std::cout << "Karen loves more bacon: " << std::endl;
	Kar.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "Karen wants bacon for free: " << std::endl;
	Kar.complain("INFO");
	std::cout << std::endl;

	std::cout << "Karen is VIP: " << std::endl;
	Kar.complain("WARNING");
	std::cout << std::endl;

	std::cout << "Karen is hysterical: " << std::endl;
	Kar.complain("ERROR");
	std::cout << std::endl;

	return 0;
}