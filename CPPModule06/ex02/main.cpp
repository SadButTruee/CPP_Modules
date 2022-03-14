/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:42:02 by rtracee           #+#    #+#             */
/*   Updated: 2022/03/12 18:28:22 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	int	i;

	srand(time(0));
	i = rand() % 3;
	switch (i)
	{
		case 0: 
			return (new A);
			break;
		case 1:
			return (new B);
			break;
		case 2:
			return (new C);
			break;
		default:;
	}
	return (0);
}

void	identify(Base *p)
{
	A	*a = dynamic_cast<A*>(p);
	B	*b = dynamic_cast<B*>(p);
	C	*c = dynamic_cast<C*>(p);

	if (a)
		COUT << "A\n";
	if (b)
		COUT << "B\n";
	if (c)
		COUT << "C\n";
}

void	identify(Base & p)
{
	try
	{
		A &	a = dynamic_cast<A &>(p);
		COUT << "A\n";
		return ;
	}
	catch (std::bad_cast &e){}
	try
	{
		B &	b = dynamic_cast<B &>(p);
		COUT << "B\n";
		return ;
	}
	catch (std::bad_cast &e){}
	try
	{
		C &	c = dynamic_cast<C &>(p);
		COUT << "C\n";
		return ;
	}
	catch (std::bad_cast &e){}
}

int	main(void)
{
	Base	*p;

	p = generate();
	identify(p);
	identify(*p);
	delete p;
	return (0);
}