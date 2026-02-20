/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 09:04:54 by jweber            #+#    #+#             */
/*   Updated: 2026/02/20 12:17:27 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "AFormException.hpp"
#include <exception>
#include <iostream>

Bureaucrat::Bureaucrat():
	name("random"),
	grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string& newName, int newGrade):
	name(newName)
{
	if (newGrade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (newGrade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = newGrade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other):
	name(other.name + "_copy"),
	grade(other.grade)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
		this->grade = other.grade;
	return (*this);
}

const	std::string&	Bureaucrat::getName() const
{
	return (this->name);
}

int						Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::signForm(AForm& form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << "Bureaucrat '" << this->getName() << "' successfully "
			"signed Form '" << form.getName() << "'\n";
	}
	catch (AFormException& e)
	{
		std::cout << "Bureaucrat '" << this->getName() << "' could not "
			"sign Form '" << form.getName() << "' because :\n";
		std::cout << e.what() << "\n";
	}
}

void	Bureaucrat::signForm(AForm* ptr_form) const
{
	this->signForm(*ptr_form);
}

void	Bureaucrat::executeForm(AForm const& form) const
{
	try
	{
		form.execute(*this);
		std::cout << "Bureaucrat '" << this->name << "' successfully executed "
			<< "Form '" << form.getName() << "'\n";
	}
	catch (AFormException& e)
	{
		std::cout << "Bureaucrat '" << this->name << "' could not execute "
			<< "Form '" << form.getName() << "' because:\n"
			<< e.what() << "\n"; 
	}
}

void	Bureaucrat::executeForm(AForm const* ptr_form) const
{
	this->executeForm(*ptr_form);
}

Bureaucrat&	Bureaucrat::operator++() // prefix increment
{
	if (this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
	return (*this);
}

Bureaucrat	Bureaucrat::operator++(int) // postfix increment
{
	Bureaucrat old(*this);
	if (this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
	return (old);
}

Bureaucrat& Bureaucrat::operator--()
{
	if (this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
	return (*this);
}

Bureaucrat	Bureaucrat::operator--(int)
{
	Bureaucrat old(*this);
	if (this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
	return (old);
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return (os);
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("bureaucrat grade too low.");
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("bureaucrat Grade too high.");
}

