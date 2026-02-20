/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:40:33 by jweber            #+#    #+#             */
/*   Updated: 2026/02/20 12:19:21 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(const std::string& newTarget):
	AForm("PresidentialPardonForm", 25, 5),
	target(newTarget)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
		throw AForm::IsNotSigned();
	if (executor.getGrade() > this->getExecuteGrade().getGrade())
		throw AForm::GradeTooLowException();
	std::cout << "'" << this->target << "' has been pardoned by Zaphod Beeblebrox.\n";
}
