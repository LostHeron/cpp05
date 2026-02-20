/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:02:29 by jweber            #+#    #+#             */
/*   Updated: 2026/02/20 12:07:18 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
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
	if (this->getIsSigned() == false)
		throw AForm::IsNotSigned();
	if (executor.getGrade() > this->getExecuteGrade().getGrade())
		throw AForm::GradeTooLowException();
	std::cout << "in Robotomy Request From executio" << std::endl;
}
