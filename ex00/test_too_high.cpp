/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_too_high.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 11:32:20 by jweber            #+#    #+#             */
/*   Updated: 2026/02/18 11:32:28 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

void	test_too_high(void)
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
