/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_form_ok.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 09:41:37 by jweber            #+#    #+#             */
/*   Updated: 2026/02/19 10:55:45 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

void	test_form_ok()
{
	try
	{
		Form	a("first_form", 12, 13);
		std::cout << a << "\n";
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(...)
	{
		std::cout << "anther error happened\n";
	}
}
