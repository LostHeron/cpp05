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

void	test_shrubbery_form(void)
{
	MSG("test shrubbery form ok")
	test_shrubbery_form_ok();
	MSG("end");
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
