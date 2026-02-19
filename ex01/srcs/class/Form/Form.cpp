/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 16:02:45 by jweber            #+#    #+#             */
/*   Updated: 2026/02/19 11:15:40 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <string>
#include <ostream>

Form::Form(const std::string& newName, int newSignGrade, int newExecuteGrade):
	name(newName),
	isSigned(false),
	signGrade(newSignGrade),
	executeGrade(newExecuteGrade)
{
}

Form::~Form()
{
}

const std::string&	Form::getName() const
{
	return (this->name);
}

bool				Form::getIsSigned() const
{
	return (this->isSigned);
}

const SignGrade&			Form::getSignGrade() const
{
	return (this->signGrade);
}

const ExecuteGrade&		Form::getExecuteGrade() const
{
	return (this->executeGrade);
}

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (this->isSigned == true)
	{
		throw Form::AlreadySigned();
	}
	if (bureaucrat.getGrade() > this->signGrade.getGrade())
	{
		throw Form::GradeTooLowException();
	}
	this->isSigned = true;
}

const char * Form::GradeTooHighException::what() const throw()
{
	return ("Form: grade too high");
}

const char * Form::GradeTooLowException::what() const throw()
{
	return ("Form: grade too low");
}

const char * Form::AlreadySigned::what() const throw()
{
	return ("Form is already signed");
}

std::ostream&	operator<<(std::ostream& os, const Form& other)
{
	os << "Form '" << other.getName() << "', isSigned: "
		<< (other.getIsSigned() ? "true" : "false")
		<< " ; signe grade : " << other.getSignGrade()
		<< " ; execute grade : " << other.getExecuteGrade() << " ;";
	return (os);
}
