/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sign_grade_too_high.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 10:52:20 by jweber            #+#    #+#             */
/*   Updated: 2026/02/19 10:57:50 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <exception>
#include <iostream>

void	test_sign_grade_too_high()
{
	try
	{
		Form	a("first_form", 15, 0);
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
