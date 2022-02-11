/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:46:56 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/10 15:31:42 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main()
{
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// COUT << "\n\n*********************************************************\n\n";
	
	// delete j;
	// delete i;

	COUT << "\n\n*********************************************************\n\n";

	Animal*	tab[10];

	for (int i = 0; i < 5; i++)
		tab[i] = new Cat();
	COUT << "\n\n*********************************************************\n\n";
	for (int i = 5; i < 10; i++)
		tab[i] = new Dog();
	COUT << "\n\n*********************************************************\n\n";
	
	for (int i = 0; i < 10; i++)
		tab[i]->makeSound();

	for (int i = 0; i < 10; i++)
		tab[i]->p_idea(i);
	
	COUT << "\n\n*********************************************************\n\n";

	for (int i = 0; i < 10; i++)
		delete tab[i];
	COUT << "\n\n*********************************************************\n\n";

	return 0;
}