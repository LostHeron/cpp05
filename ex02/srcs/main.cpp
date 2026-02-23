/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 18:05:29 by jweber            #+#    #+#             */
/*   Updated: 2026/02/20 14:34:56 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"
#include "test_bureaucrat.hpp"
#include "test_form.hpp"

int	main(void)
{
	test_bureaucrat();
	test_form();

	MSG_POUND("test presidential form");NL;
	test_presidential_form();NL;
	MSG_POUND("end");NL;NL;

	MSG_POUND("test robotomy form");NL;
	test_robotomy_form();NL;
	MSG_POUND("end");NL;NL;

	MSG_POUND("test shrubbery form");NL;
	test_shrubbery_form();NL;
	MSG_POUND("end");NL;NL;
}
