/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:16:34 by rtracee           #+#    #+#             */
/*   Updated: 2022/02/17 17:10:50 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){

	COUT << "*********************************************************\n\n";
	
	try{
		Bureaucrat Sar3("Sar", 28);
		COUT << Sar3 << ENDL;
		Sar3.dec_grade();
		COUT << Sar3 << ENDL;
	}
	catch (std::exception & e)
	{
		COUT << RED << e.what() << RESET << ENDL;
	}
	
	COUT << "*********************************************************\n\n";
	
	try{
		Bureaucrat	Sar("Sar", 28);
		COUT << Sar << ENDL;
		Sar.inc_grade();
		COUT << Sar << ENDL;
	}
	catch (std::exception & e){
		COUT << RED << e.what() << RESET << ENDL;
	}

	COUT << "*********************************************************\n\n";
	
	try{
		Bureaucrat	Sar1("Sar", 0);
		COUT << Sar1 << ENDL;
	}
	catch (std::exception & e){
		COUT << RED << e.what() << RESET << ENDL;
	}

	COUT << "*********************************************************\n\n";
	try{
		Bureaucrat Sar2("Sar", 151);
		COUT << Sar2 << ENDL;
	}
	catch (std::exception & e){
		COUT << RED << e.what() << RESET << ENDL;
	}

	COUT << "*********************************************************\n\n";
	
	try{
		Bureaucrat Sar4("Sar", 1);
		COUT << Sar4 << ENDL;
		Sar4.inc_grade();
		COUT << Sar4 << ENDL;
	}
	catch (std::exception & e){
		COUT << RED << e.what() << RESET << ENDL;
	}

	COUT << "*********************************************************\n\n";
	
	try{
		Bureaucrat Sar5("Sar", 150);
		COUT << Sar5 << ENDL;
		Sar5.dec_grade();
		COUT << Sar5 << ENDL;
	}
	catch (std::exception & e){
		COUT << RED << e.what() << RESET << ENDL;
	}
	return (0);
}