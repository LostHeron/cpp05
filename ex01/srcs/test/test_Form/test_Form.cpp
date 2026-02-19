/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_Form.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 09:40:55 by jweber            #+#    #+#             */
/*   Updated: 2026/02/19 11:20:15 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Form.hpp"
#include "test.hpp"

void	test_Form(void)
{
	MSG("test form ok");
	test_form_ok();
	MSG("end");NL;

	MSG("test form sign grade too high");
	test_sign_grade_too_high();
	MSG("end");NL;

	MSG("test form sign grade too low");
	test_sign_grade_too_low();
	MSG("end");NL;

	MSG("test form execute grade too high");
	test_execute_grade_too_high();
	MSG("end");NL;

	MSG("test form execute grade too low");
	test_execute_grade_too_low();
	MSG("end"); NL;

	MSG("test signing form ok")
	{
		test_form_signing_ok();
	}
	MSG("end");NL;
}
