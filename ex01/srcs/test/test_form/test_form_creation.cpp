/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_form_creation.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 12:53:19 by jweber            #+#    #+#             */
/*   Updated: 2026/02/19 13:18:47 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <exception>
#include <iostream>
#include "test.hpp"

void	test_form_creation_ok(void);
void	test_form_creation_execute_grade_too_high(void);
void	test_form_creation_execute_grade_too_low(void);
void	test_form_creation_sign_grade_too_high(void);
void	test_form_creation_sign_grade_too_low(void);

#define OTHER_ERROR  std::cout << "another error happened\n"

void	test_form_creation()
{
	MSG("test form ok");
	test_form_creation_ok();
	MSG("end");NL;

	MSG("test form sign grade too high");
	test_form_creation_sign_grade_too_high();
	MSG("end");NL;

	MSG("test form sign grade too low");
	test_form_creation_sign_grade_too_low();
	MSG("end");NL;

	MSG("test form execute grade too high");
	test_form_creation_execute_grade_too_high();
	MSG("end");NL;

	MSG("test form execute grade too low");
	test_form_creation_execute_grade_too_low();
	MSG("end"); NL;
}

void	test_form_creation_ok()
{
	std::cout << "test: Form	a(\"first_form\", 12, 13);\n";
	try
	{
		Form	a("first_form", 12, 13);
		std::cout << a << "\n";
	}
	catch(std::exception& e)
	{
		std::cout << "error: " << e.what() << std::endl;
	}
	catch(...)
	{
		OTHER_ERROR;
	}
}

void	test_form_creation_execute_grade_too_high(void)
{
	std::cout << "test: Form	a(\"first_form\", 0, 13);\n";
	try
	{
		Form	a("first_form", 0, 13);
		std::cout << a << "\n";
	}
	catch(std::exception& e)
	{
		std::cout << "error: " << e.what() << "\n";
	}
	catch(...)
	{
		OTHER_ERROR;
	}
}

void	test_form_creation_execute_grade_too_low(void)
{
	std::cout << "test: Form	a(\"first_form\", 1500, 13);\n";
	try
	{
		Form	a("first_form", 1500, 13);
		std::cout << a << "\n";
	}
	catch(std::exception& e)
	{
		std::cout << "error: " << e.what() << "\n";
	}
	catch(...)
	{
		OTHER_ERROR;
	}
}

void	test_form_creation_sign_grade_too_high()
{
	std::cout << "test: Form	a(\"first_form\", 15, 0);\n";
	try
	{
		Form	a("first_form", 15, 0);
		std::cout << a << "\n";
	}
	catch(std::exception& e)
	{
		std::cout << "error: " << e.what() << "\n";
	}
	catch(...)
	{
		OTHER_ERROR;
	}
}

void	test_form_creation_sign_grade_too_low(void)
{
	std::cout << "test: Form	a(\"first_form\", 15, 1500);\n";
	try
	{
		Form	a("first_form", 15, 1500);
		std::cout << a << "\n";
	}
	catch(std::exception& e)
	{
		std::cout << "error: " << e.what() << "\n";
	}
	catch(...)
	{
		OTHER_ERROR;
	}
}
