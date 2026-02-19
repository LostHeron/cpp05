/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_form_signing.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 11:16:07 by jweber            #+#    #+#             */
/*   Updated: 2026/02/19 16:08:53 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "test.hpp"
#include <exception>
#include <iostream>

void	test_form_signing_ok(void);
void	test_form_signing_grade_too_low(void);
void	test_form_signing_already_signed(void);

void	test_form_signing(void)
{
	/*
	MSG("test form signing ok");
	test_form_signing_ok();
	MSG("end");NL;


	MSG("test form grade too low");
	test_form_signing_grade_too_low();
	MSG("end");NL;

	MSG("test form already signed");
	test_form_signing_already_signed();
	MSG("end");NL;
	*/
}

/*
void	test_form_signing_ok(void)
{
	try
	{
		Bureaucrat	enzo("enzo", 12);
		std::cout << enzo << "\n";
		Form		rsa("RSA", 150, 150);
		std::cout << rsa << "\n";
		enzo.signForm(rsa);
	}
	catch (std::exception& e)
	{
		std::cout << "error: " << e.what() << "\n";
	}
	catch (...)
	{
		std::cout << "another error occured\n";
	}
}

void test_form_signing_grade_too_low(void)
{
	try
	{
		Bureaucrat	enzo("enzo", 12);
		std::cout << enzo << "\n";
		Form		rsa("RSA", 3, 4);
		std::cout << rsa << "\n";
		enzo.signForm(rsa);
	}
	catch (std::exception& e)
	{
		std::cout << "error: " << e.what() << "\n";
	}
	catch (...)
	{
		std::cout << "another error occured\n";
	}
}


void test_form_signing_already_signed(void)
{
	try
	{
		Bureaucrat	enzo("enzo", 4);
		std::cout << enzo << "\n";
		Form		rsa("RSA", 110, 112);
		std::cout << rsa << "\n";
		enzo.signForm(rsa);
		enzo.signForm(rsa);
	}
	catch (std::exception& e)
	{
		std::cout << "error: " << e.what() << "\n";
	}
	catch (...)
	{
		std::cout << "another error occured\n";
	}
}
*/
