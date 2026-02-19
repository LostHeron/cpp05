/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:02:29 by jweber            #+#    #+#             */
/*   Updated: 2026/02/19 17:41:14 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(const std::string& newTarget):
	AForm("RobotomyRequestForm", 72, 45),
	target(newTarget)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	(void) executor;
	std::cout << "in Robotomy Request From executio" << std::endl;
}
