/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_form_creation.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 12:53:19 by jweber            #+#    #+#             */
/*   Updated: 2026/02/19 17:44:07 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm/PresidentialPardonForm.hpp"
#include "RobotomyRequestForm/RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
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

	/*
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
	*/
}

void	test_form_creation_ok()
{
	AForm *my_form;
	Bureaucrat enzo("enzo", 25);
	//std::cout << "test: Form	a(\"first_form\", 12, 13);\n";
	try
	{
		my_form = new RobotomyRequestForm("petrini");
		my_form->execute(enzo);
		std::cout << my_form << "\n";
	}
	catch(std::exception& e)
	{
		std::cout << "error: " << e.what() << std::endl;
	}
	catch(...)
	{
		OTHER_ERROR;
	}
	// ok something here bad, cuz if operator 'new' threw, then i would delete
	// something that shouldn't ??
	delete my_form;
}

/*
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
*/
