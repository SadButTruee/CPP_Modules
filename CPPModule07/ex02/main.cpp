/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 11:34:21 by rtracee           #+#    #+#             */
/*   Updated: 2022/03/13 12:25:15 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() : size(0), counter(0){elem = new T[1];}

template<typename T>
Array<T>::Array(unsigned int n) : size(n), counter(0){elem = new T[n];}

template<typename T>
Array<T>::Array(Array<T> const & src){*this = src;}

template<typename T>
Array<T>::~Array(void){delete [] elem;}

template<typename T>
Array<T> &	Array<T>::operator=(Array<T> const & A)
{
	if (this == &A)
		return (*this);
	delete [] elem;
	size = A.getSize();
	counter = A.count();
	elem = new T[size];
	for (unsigned int i = 0; i < counter; i++)
		elem[i] = A.getElem(i);
	return (*this);
}

template<typename T>
T &	Array<T>::operator[](unsigned int const & index){return (this->getElem(index));}

template<typename T>
T &	Array<T>::getElem(unsigned int const & i) const{
	if (i >= size || size == 0)
		throw std::exception();
	return (this->elem[i]);
}

template<typename T>
void	Array<T>::setElem(T e){

	if (size == 0){
		COUT << RED << "There's no place in this array" << RESET << ENDL;
		return ;
	}
	if (counter == size){
		COUT << RED << "Array full" << RESET << ENDL;
		return ;
	}
	this->elem[counter] = e;
	counter++;
}

template<typename T>
unsigned int const &	Array<T>::getSize(void) const{return (this->size);}

template<typename T>
unsigned int const &	Array<T>::count() const{return (this->counter);}

int main(){
	Array<int>	a(3);
	a.setElem(21);
	
	Array<int>	b;
	b = a;
	b.setElem(42);
	
	COUT << "Objects A elements: " << a.getElem(0) << ENDL;
	COUT << "Objects B elements: " << b.getElem(0) << " " << b.getElem(1) << ENDL ;
	COUT << "Number of elements: A = " << a.count() << ENDL;
	COUT << "Number of elements: B = "<< b.count() << ENDL ;
	
	b[0] = 42;
	COUT << "Objects B elements: " << b.getElem(0) << " " << b.getElem(1) << ENDL ;
	try{
		COUT << b[5] << ENDL;
	}
	catch (std::exception & e){
		COUT << RED << "Error: Out of range" << RESET <<  ENDL;
	}
	b.setElem(42);
	b.setElem(42);

	Array<STRING>	d(2);

	d.setElem("School");
	d.setElem("Ecole");
	d.setElem("Школа");
	try{
		COUT << d[0] << " " << d[1] << ENDL;
	}
	catch (std::exception & e){
		COUT << "Error: Out of range" << ENDL;
	}

	return (0);

}