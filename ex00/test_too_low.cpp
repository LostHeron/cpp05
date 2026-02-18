/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_too_low.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 11:32:40 by jweber            #+#    #+#             */
/*   Updated: 2026/02/18 11:32:57 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

void	test_too_low(void)
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
