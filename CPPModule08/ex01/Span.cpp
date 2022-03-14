/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 17:22:52 by rtracee           #+#    #+#             */
/*   Updated: 2022/03/13 18:21:48 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : max(0){}

Span::Span(unsigned int n) : max(n){}

Span::Span(Span const & S){
	max = S.getMax();
	array = S.getArray();
}

Span::~Span(void){}

Span &	Span::operator=(Span const & rhs){
	if (this == &rhs)
		return (*this);
	array = rhs.getArray();
	max = rhs.getMax();
	return (*this);
}

void	Span::addNumber(int nb){
	if (this->size() >= max)
		throw Span::fullVector();
	this->array.push_back(nb);
}

void	Span::addRange(int nb){
	if (this->size() >= max)
		throw Span::fullVector();
	int i = 0;
	int j;
	while(this->size() < max && i < nb){
		j = rand() % nb;
		this->array.push_back(j);
		i++;
	}
}

unsigned int	Span::shortestSpan(void)
{
	if (this->size() < 2)
		throw Span::notEnoughInt();

	std::vector<int>	diff(this->size());
	std::vector<int>	copy = this->getArray();

	sort(copy.begin(), copy.end());
	std::adjacent_difference(copy.begin(), copy.end(), diff.begin());
	unsigned int	res = *(min_element(diff.begin() + 1, diff.end()));
	return (res);
}

unsigned int	Span::longestSpan(void)
{
	if (this->size() < 2)
		throw Span::notEnoughInt();

	unsigned int		diff = UINT_MAX;
	std::vector<int>	vector = this->getArray();
	sort(vector.begin(), vector.end());
	diff = abs(*(vector.begin()) - *(vector.end() - 1));
	return (diff);
}

std::vector<int>	Span::getArray(void) const{return (this->array);}

unsigned int	Span::getMax(void) const{return (this->max);}

unsigned int	Span::size(void) const{return (this->array.size());}

const char	*Span::fullVector::what(void) const throw(){
	return ("Error: Vector is full");
}

const char	*Span::notEnoughInt::what(void) const throw(){
	return ("Error: need at least two elements");
}

void Span::max_el(){
	std::cout << "Max: " << *std::max_element (array.begin(), array.end()) << ENDL;
}

void Span::min_el(){
	std::cout << "Min: " << *std::min_element (array.begin(), array.end()) << ENDL;
}

void	Span::printContent(){
	std::vector<int>	v = getArray();
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	ite = v.end();
	for (it = v.begin(); it != ite; it++)
	COUT << *it << " ";
	COUT << ENDL;
}
