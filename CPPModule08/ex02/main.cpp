/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 18:39:48 by rtracee           #+#    #+#             */
/*   Updated: 2022/03/14 12:05:48 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"





int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3); 
	mstack.push(5); 
	mstack.push(737);
	MutantStack<int>::iterator it = mstack.begin(); 
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
    	std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack); 

	COUT << "**********************************************\n";

	std::list<int> mstack2;
	mstack2.push_back(5);
	mstack2.push_back(17);
	std::cout << mstack2.back() << std::endl;
	mstack2.pop_back();
	std::cout << mstack2.size() << std::endl;
	mstack2.push_back(3); 
	mstack2.push_back(5); 
	mstack2.push_back(737);
	std::list<int>::iterator it2 = mstack2.begin(); 
	std::list<int>::iterator ite2 = mstack2.end();
	++it2;
	--it2;
	while (it2 != ite2) {
    	std::cout << *it2 << std::endl;
		++it2;
	}
	return 0;
}