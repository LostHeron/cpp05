/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_increment.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 11:33:39 by jweber            #+#    #+#             */
/*   Updated: 2026/02/18 11:38:20 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

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
