/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_presidential_form.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 13:44:49 by jweber            #+#    #+#             */
/*   Updated: 2026/02/20 14:03:10 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "AWorkExceptions.hpp"
#include "Bureaucrat.hpp"
#include "test.hpp"
#include "PresidentialPardonForm.hpp"

void	test_presidential_form_ok(void);

void	test_presidential_form(void)
{
	MSG("test presidential form creation");
	test_presidential_form_ok();
	MSG("end");NL;
}

void	test_presidential_form_ok(void)
{
	AForm *ptr_form;
	try
	{
		Bureaucrat enzo("enzo", 1);
		std::cout << "sucessfully created bureaucrat: " << enzo << "\n";NL;
		ptr_form = new PresidentialPardonForm("Gautier");
		std::cout << "successfully created form: " << ptr_form << "\n";NL;
		enzo.signForm(ptr_form);NL;
		enzo.executeForm(ptr_form);NL;
	}
	catch (AWorkExceptions& e)
	{
		std::cout << "could not create bureaucrat, "
			<< "error: " << e.what() << "\n";
	}
	delete ptr_form;
}
