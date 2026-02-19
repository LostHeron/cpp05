/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_execute_grade_too_high.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 10:52:47 by jweber            #+#    #+#             */
/*   Updated: 2026/02/19 10:59:07 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <exception>
#include <iostream>

void	test_execute_grade_too_high(void)
{
	try
	{
		Form	a("first_form", 0, 13);
		std::cout << a << "\n";
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << "\n";
	}
	catch(...)
	{
		std::cout << "another error occured" << std::endl;
	}
}
