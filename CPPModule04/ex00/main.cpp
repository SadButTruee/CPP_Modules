/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:46:56 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/10 11:43:52 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal*		meta = new Animal();
	const Animal*		j = new Dog();
	const Animal*		i = new Cat();
	
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
    meta->makeSound();
	
	delete i;
	delete j;
	delete meta;

	COUT << "\n\n*********************************************************\n\n";

	const WrongAnimal*	a = new WrongAnimal();
	const WrongAnimal*	b = new WrongCat();
	b->makeSound();
	delete a;
	delete b;
	
	return 0;
}