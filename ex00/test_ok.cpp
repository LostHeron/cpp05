/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ok.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 11:31:55 by jweber            #+#    #+#             */
/*   Updated: 2026/02/18 11:32:09 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

void	test_ok(void)
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
