/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:02:29 by jweber            #+#    #+#             */
/*   Updated: 2026/02/20 14:21:02 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include <ctime>
#include <iostream>
#include <cstdlib>
#include <ctime>

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
	this->AForm::execute(executor);
	std::cout << "BRRrrrrRRRRRRRRRRR...CRRRrRRRRRR..DRRRRRRRRRR.....\n";
	std::srand(std::time(NULL));
	if (rand() % 2 == 0)
		std::cout << "Successfully robotomized '" << this->target << "'\n";
	else
		std::cout << "failed to robotomized '" << this->target << "'\n";
}
