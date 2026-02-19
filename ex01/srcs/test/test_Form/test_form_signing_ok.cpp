/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_form_signing_ok.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 11:16:07 by jweber            #+#    #+#             */
/*   Updated: 2026/02/19 11:18:36 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>
#include <iostream>

void	test_form_signing_ok(void)
{
	try
	{
		Bureaucrat	enzo("enzo", 12);
		Form		rsa("RSA", 150, 150);
		enzo.signForm(rsa);
	}
	catch (std::exception& e)
	{
	}
	catch (...)
	{
		std::cout << "another error occured" << std::endl;
	}
}
