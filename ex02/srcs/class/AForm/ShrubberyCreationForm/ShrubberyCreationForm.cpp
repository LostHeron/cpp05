/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 16:20:52 by jweber            #+#    #+#             */
/*   Updated: 2026/02/20 12:07:31 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& newTarget):
	AForm("ShrubberyCreationForm", 145, 137),
	target(newTarget)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
		throw AForm::IsNotSigned();
	if (executor.getGrade() > this->getExecuteGrade().getGrade())
		throw AForm::GradeTooLowException();
	std::cout << "in Shurbbery Creation Form" << std::endl;
}
