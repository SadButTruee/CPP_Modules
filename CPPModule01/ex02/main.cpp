/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:38:45 by rtracee           #+#    #+#             */
/*   Updated: 2022/01/30 16:20:49 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string sar = "HI THIS IS BRAIN";
	std::string *stringPTR = &sar;
	std::string &stringREF = sar;

	std::cout << stringPTR << std::endl;
	std::cout << &stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << sar << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}