/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:40:33 by jweber            #+#    #+#             */
/*   Updated: 2026/02/20 13:41:03 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <string>

#include <iostream>
PresidentialPardonForm::PresidentialPardonForm(const std::string& newTarget):
	AForm("PresidentialPardonForm", 25, 5),
	target(newTarget)
{
	std::cout << "presidential constructor\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	this->AForm::execute(executor);
	std::cout << "'" << this->target << "' has been pardoned by Zaphod Beeblebrox.\n";
	//if (this->target[0] == 'c') (void) executor;
}
