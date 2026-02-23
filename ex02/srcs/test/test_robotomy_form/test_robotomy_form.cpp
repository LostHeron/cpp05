/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_robotomy_form.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 14:04:39 by jweber            #+#    #+#             */
/*   Updated: 2026/02/20 14:39:35 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "AWorkExceptions.hpp"
#include "Bureaucrat.hpp"
#include "test.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>

void	test_robotomy_form_ok(void);
void	test_robotomy_form_fail_then_ok(void);

void	test_robotomy_form(void)
{
	MSG("test robotomy form ok");
	test_robotomy_form_ok();
	MSG("end");NL;NL;

	MSG("test robotomy form fail then ok");
	test_robotomy_form_fail_then_ok();
	MSG("end");NL;NL;
}

void	test_robotomy_form_ok(void)
{
	AForm *ptr_form;
	try
	{
		Bureaucrat	enzo("enzo", 1);
		std::cout << "successfully created bureaucrate: " << enzo << "\n";NL;

		ptr_form = new RobotomyRequestForm("Gautier");
		std::cout << "successfully created form: " << ptr_form << "\n";NL;

		enzo.signForm(ptr_form);NL;
		enzo.executeForm(ptr_form);NL;
	}
	catch(AWorkExceptions& e)
	{
		std::cout << "error: " << e.what() << "\n";
	}
	delete ptr_form;
}

void test_robotomy_form_fail_then_ok(void)
{
	AForm *ptr_form;
	try
	{
		Bureaucrat enzo("enzo", 75);
		std::cout << "successfully created bureaucrat: " << enzo << "\n";NL;
		ptr_form = new RobotomyRequestForm("Gautier");
		std::cout << "successfully created form: " << ptr_form << "\n";NL;
		enzo.executeForm(ptr_form);NL;
		enzo.signForm(ptr_form);NL;
		for (int i = 0; i < 10 ; i++)
			enzo++;
		std::cout << enzo << "\n";NL;
		enzo.signForm(ptr_form);NL;
		enzo.executeForm(ptr_form);NL;
		for (int i = 0; i < 50 ; i++)
			enzo++;
		std::cout << enzo << "\n";NL;
		enzo.signForm(ptr_form);NL;
		enzo.executeForm(ptr_form);NL;
	}
	catch(AWorkExceptions& e)
	{
		std::cout << "could not create bureaucrat, "
			<< "error: " << e.what() << "\n";
	}
	delete ptr_form;
}
