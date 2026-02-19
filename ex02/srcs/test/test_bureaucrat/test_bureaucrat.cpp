/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bureaucrat.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 18:03:16 by jweber            #+#    #+#             */
/*   Updated: 2026/02/19 13:17:24 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"
#include "test_bureaucrat.hpp"
#include "Bureaucrat.hpp"

void	test_bureaucrat_creation_ok(void);
void	test_bureaucrat_creation_grade_too_high(void);
void	test_bureaucrat_creation_grade_too_low(void);
void	test_decrement(void);
void	test_increment(void);

void	test_bureaucrat()
{
	MSG_POUND("TEST BUREAUCRAT");NL;

	MSG("test ok");
	test_bureaucrat_creation_ok();
	MSG("end");NL;

	MSG("test too high");
	test_bureaucrat_creation_grade_too_high();
	MSG("end");NL;

	MSG("test too low");
	test_bureaucrat_creation_grade_too_low();
	MSG("end");NL;

	MSG("test increment");
	test_increment();
	MSG("end");NL;

	MSG("test decrement");
	test_decrement();
	MSG("end");NL;

	MSG_POUND("end");NL;
}


void test_decrement(void)
{
	try
	{
		Bureaucrat	enzo("enzo", 147);
		std::cout << "enzo build successfully" << std::endl;
		std::cout << enzo << std::endl;

		enzo--;
		std::cout << enzo << std::endl;

		enzo--;
		std::cout << enzo << std::endl;

		enzo--;
		std::cout << enzo << std::endl;

		enzo--;
		std::cout << enzo << std::endl;

		enzo--;
		std::cout << enzo << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void test_increment(void)
{
	try
	{
		Bureaucrat	enzo("enzo", 3);
		std::cout << "enzo build successfully" << std::endl;
		std::cout << enzo << std::endl;

		enzo++;
		std::cout << enzo << std::endl;

		enzo++;
		std::cout << enzo << std::endl;

		enzo++;
		std::cout << enzo << std::endl;

		enzo++;
		std::cout << enzo << std::endl;

		enzo++;
		std::cout << enzo << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	test_bureaucrat_creation_ok(void)
{
	try
	{
		Bureaucrat enzo("enzo", 70);
		std::cout << "enzo successfully constructed" << std::endl;
		std::cout << enzo << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "catched in std::exception" << std::endl;
		std::cout << e.what() << std::endl;
	}
	catch(...)
	{
		std::cout << "another error occured" << std::endl;
	}
}

void	test_bureaucrat_creation_grade_too_high(void)
{
	try
	{
		Bureaucrat enzo("enzo", 0);
		std::cout << "enzo successfully constructed" << std::endl;
		std::cout << enzo << std::endl;
	}
	catch(...) // allow to catch all exception
	{
		std::cout << "an error occured while trying to build bureaucrat" << std::endl;
		try
		{
			throw;
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	/*
	catch (std::exception &e)
	{
		std::cout << "catched in std::exception" << std::endl;
		std::cout << e.what() << std::endl;
	}
	catch(...) // allow to catch all exception
	{
		std::cout << "another error occured" << std::endl;
	}
	*/
}

void	test_bureaucrat_creation_grade_too_low(void)
{
	try
	{
		Bureaucrat enzo("enzo", 151);
		std::cout << "enzo successfully constructed" << std::endl;
		std::cout << enzo << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "catched in std::exception" << std::endl;
		std::cout << e.what() << std::endl;
	}
	catch(int val)
	{
		std::cout << "catched error in int, val = " << val << std::endl;
	}
	catch(void *ptr)
	{
		std::cout << "catched error in void *, ptr = " << ptr << std::endl;
	}
	catch(...)
	{
		std::cout << "another error occured" << std::endl;
	}
}
