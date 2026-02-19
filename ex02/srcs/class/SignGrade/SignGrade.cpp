/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SignGrade.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:44:58 by jweber            #+#    #+#             */
/*   Updated: 2026/02/19 16:04:48 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SignGrade.hpp"
#include "AForm.hpp"

SignGrade::SignGrade(int value)
{
	if (value < 1)
		throw AForm::GradeTooHighException();
	if (value > 150)
		throw AForm::GradeTooLowException();
	this->grade = value;
}

int	SignGrade::getGrade() const
{
	return (this->grade);
}

std::ostream&	operator<<(std::ostream& os, const SignGrade& sg)
{
	os << sg.getGrade();
	return (os);
}
