/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 18:05:29 by jweber            #+#    #+#             */
/*   Updated: 2026/02/20 18:20:46 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "AWorkExceptions.hpp"
#include "Bureaucrat.hpp"
#include "test_bureaucrat.hpp"
#include "test_form.hpp"
#include "test.hpp"
#include "Intern.hpp"
#include <iostream>

int	main(void)
{
	test_bureaucrat();
	test_form();
	test_presidential_form();
	test_robotomy_form();
	test_shrubbery_form();

	MSG_POUND("test with intern");NL;
	try
	{
		Intern	a;NL;
		AForm	*test = a.makeForm("coucoucou", "ahahah");
		(void) test;
		test = a.makeForm("ahah", "yohoho");
		AForm	*shrub = a.makeForm("shrubbery", "shrubbery_Gautier");
		shrub = a.makeForm("shrubbery form", "shrubbery_Gautier");
		shrub = a.makeForm("shrubbery form", "shrubbery_Gautier");
		shrub = a.makeForm("shrubbery form", "shrubbery_Gautier");
		shrub = a.makeForm("shrubbery form", "shrubbery_Gautier");
		shrub = a.makeForm("shrubbery form", "shrubbery_Gautier");
		shrub = a.makeForm("shrubbery form", "shrubbery_Gautier");
		shrub = a.makeForm("shrubbery form", "shrubbery_Gautier");
		shrub = a.makeForm("shrubbery form", "shrubbery_Gautier");
		shrub = a.makeForm("shrubbery form", "shrubbery_Gautier");
		AForm	*robotomy = a.makeForm("robotomy ", "robotomy_ahah");
		AForm	*presidential = a.makeForm("presidential", "presidential_coucou");NL;
		
		std::cout << shrub << "\n";NL;
		std::cout << robotomy << "\n";NL;
		std::cout << presidential << "\n";NL;
		
		Bureaucrat enzo("enzo", 150);
		std::cout << enzo << "\n"; 
		std::cout << shrub << "\n";
		std::cout << robotomy << "\n";
		std::cout << presidential << "\n";
		enzo.signForm(shrub);
		enzo.executeForm(shrub);
		enzo.signForm(robotomy);
		enzo.executeForm(robotomy);
		enzo.signForm(presidential);
		enzo.executeForm(presidential);NL;

		for (; enzo.getGrade() > 145; enzo++);
		std::cout << enzo << "\n"; 
		std::cout << shrub << "\n";
		std::cout << robotomy << "\n";
		std::cout << presidential << "\n";
		enzo.signForm(shrub);
		enzo.executeForm(shrub);
		enzo.signForm(robotomy);
		enzo.executeForm(robotomy);
		enzo.signForm(presidential);
		enzo.executeForm(presidential);NL;

		for (; enzo.getGrade() > 137; enzo++);
		std::cout << enzo << "\n"; 
		std::cout << shrub << "\n";NL;
		std::cout << robotomy << "\n";NL;
		std::cout << presidential << "\n";NL;
		enzo.signForm(shrub);
		enzo.executeForm(shrub);
		enzo.signForm(robotomy);
		enzo.executeForm(robotomy);
		enzo.signForm(presidential);
		enzo.executeForm(presidential);NL;

		for (; enzo.getGrade() > 72; enzo++);
		std::cout << enzo << "\n"; 
		std::cout << shrub << "\n";
		std::cout << robotomy << "\n";
		std::cout << presidential << "\n";
		enzo.signForm(shrub);
		enzo.executeForm(shrub);
		enzo.signForm(robotomy);
		enzo.executeForm(robotomy);
		enzo.signForm(presidential);
		enzo.executeForm(presidential);NL;

		for (; enzo.getGrade() > 45; enzo++);
		std::cout << enzo << "\n"; 
		std::cout << shrub << "\n";
		std::cout << robotomy << "\n";
		std::cout << presidential << "\n";
		enzo.signForm(shrub);
		enzo.executeForm(shrub);
		enzo.signForm(robotomy);
		enzo.executeForm(robotomy);
		enzo.signForm(presidential);
		enzo.executeForm(presidential);NL;

		for (; enzo.getGrade() > 25; enzo++);
		std::cout << enzo << "\n"; 
		std::cout << shrub << "\n";
		std::cout << robotomy << "\n";
		std::cout << presidential << "\n";
		enzo.signForm(shrub);
		enzo.executeForm(shrub);
		enzo.signForm(robotomy);
		enzo.executeForm(robotomy);
		enzo.signForm(presidential);
		enzo.executeForm(presidential);NL;

		for (; enzo.getGrade() > 5; enzo++);
		std::cout << enzo << "\n"; 
		enzo.signForm(shrub);
		enzo.executeForm(shrub);
		enzo.signForm(robotomy);
		enzo.executeForm(robotomy);
		enzo.signForm(presidential);
		enzo.executeForm(presidential);NL;
	}
	catch(AWorkExceptions& e)
	{
		std::cout << "error: " << e.what() << "\n";
	}
	NL;MSG_POUND("end");NL;
}
