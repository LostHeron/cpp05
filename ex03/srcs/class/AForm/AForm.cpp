/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 16:02:45 by jweber            #+#    #+#             */
/*   Updated: 2026/02/20 13:39:17 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <string>
#include <ostream>

AForm::AForm(const std::string& newName, int newSignGrade, int newExecuteGrade):
	name(newName),
	isSigned(false),
	signGrade(newSignGrade),
	executeGrade(newExecuteGrade)
{
}

AForm::~AForm()
{
}

const std::string&	AForm::getName() const
{
	return (this->name);
}

bool				AForm::getIsSigned() const
{
	return (this->isSigned);
}

const SignGrade&			AForm::getSignGrade() const
{
	return (this->signGrade);
}

const ExecuteGrade&		AForm::getExecuteGrade() const
{
	return (this->executeGrade);
}

void	AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (this->isSigned == true)
	{
		throw AForm::AlreadySigned();
	}
	if (bureaucrat.getGrade() > this->signGrade.getGrade())
	{
		throw AForm::GradeTooLowException();
	}
	this->isSigned = true;
}

void		AForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
		throw AForm::IsNotSigned();
	if (executor.getGrade() > this->getExecuteGrade().getGrade())
		throw AForm::GradeTooLowException();
	return ;
}

const char * AForm::GradeTooHighException::what() const throw()
{
	return ("form grade too high");
}

const char * AForm::GradeTooLowException::what() const throw()
{
	return ("form grade too low");
}

const char * AForm::AlreadySigned::what() const throw()
{
	return ("form is already signed");
}

const char * AForm::IsNotSigned::what() const throw()
{
	return ("form is not signed");
}

std::ostream&	operator<<(std::ostream& os, const AForm& other)
{
	os << "AForm-> name: '" << other.getName() << "', "
		<< "isSigned: '" << (other.getIsSigned() ? "true" : "false") << "', "
		<< "sign grade: " << other.getSignGrade() << ", "
		<< "execute grade: " << other.getExecuteGrade() << ",";
	return (os);
}

std::ostream&	operator<<(std::ostream& os, const AForm *ptr_other)
{
	return (operator<<(os, *ptr_other));
}
