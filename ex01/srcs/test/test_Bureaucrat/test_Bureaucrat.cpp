/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_Bureaucrat.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 18:03:16 by jweber            #+#    #+#             */
/*   Updated: 2026/02/19 09:45:03 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"
#include "test_Bureaucrat.hpp"

void	test_Bureaucrat()
{
	MSG("test ok");
	test_ok();
	MSG("end");NL;

	MSG("test too high");
	test_too_high();
	MSG("end");NL;

	MSG("test too low");
	test_too_low();
	MSG("end");NL;

	MSG("test increment");
	test_increment();
	MSG("end");NL;

	MSG("test decrement");
	test_decrement();
	MSG("end");NL;
}
