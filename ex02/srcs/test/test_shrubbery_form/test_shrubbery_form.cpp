/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_shrubbery_form.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 14:21:43 by jweber            #+#    #+#             */
/*   Updated: 2026/02/20 14:39:28 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "AWorkExceptions.hpp"
#include "test.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

void	test_shrubbery_form_ok(void);
void test_shrubbery_form_fail_then_ok(void);

void	test_shrubbery_form(void)
{
	MSG("test shrubbery form ok")
	test_shrubbery_form_ok();
	MSG("end");NL;NL;

	MSG("test shrubbery form fail then ok")
	test_shrubbery_form_fail_then_ok();
	MSG("end");NL;NL;
}

void	test_shrubbery_form_ok(void)
{
	AForm *ptr_form;
	try
	{
		Bureaucrat	enzo("enzo", 1);
		std::cout << "successfully created bureaucrate: " << enzo << "\n";NL;

		ptr_form = new ShrubberyCreationForm("Gautier");
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

void test_shrubbery_form_fail_then_ok(void)
{
	AForm *ptr_form;
	try
	{
		Bureaucrat enzo("enzo", 150);
		std::cout << "successfully created bureaucrat: " << enzo << "\n";NL;
		ptr_form = new ShrubberyCreationForm("Gagou");
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
		Bureaucrat alan("alan", 1615);
	}
	catch(AWorkExceptions& e)
	{
		std::cout << "could not create bureaucrat, "
			<< "error: " << e.what() << "\n";
	}
	delete ptr_form;
}
