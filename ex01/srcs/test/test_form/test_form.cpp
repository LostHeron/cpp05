/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_form.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 09:40:55 by jweber            #+#    #+#             */
/*   Updated: 2026/02/19 13:08:50 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_form.hpp"
#include "test.hpp"

void	test_form(void)
{
	MSG_POUND("TEST FORM CREATION");NL;
	test_form_creation();
	MSG_POUND("END");NL;

	MSG_POUND("TEST FORM SIGNING");NL;
	test_form_signing();
	MSG_POUND("END");NL;
}
