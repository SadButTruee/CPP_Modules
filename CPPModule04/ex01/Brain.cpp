/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:52:55 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/10 15:28:15 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Idea";
	COUT << "Brain default constructor called" << ENDL;
}

Brain::Brain(const Brain& A){
	*this = A;
	COUT <<"Brain copy constructor called\n";
}

Brain& Brain::operator=(const Brain& A){
	for (int i = 0; i < 100; i++)
		this->ideas[i] = A.ideas[i];
	COUT << "Brain assignation operator called\n";
	return *this;
}

Brain::~Brain(){
	COUT << "Brain defaulat destructor called\n";
}

void Brain::p_idea(int i){
	COUT << GREEN << this->ideas[i] << RESET << ENDL;
}