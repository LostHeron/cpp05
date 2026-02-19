/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SignGrade.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:44:58 by jweber            #+#    #+#             */
/*   Updated: 2026/02/18 18:02:45 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SignGrade.hpp"
#include "Form.hpp"

SignGrade::SignGrade(int value)
{
	if (value < 1)
		throw Form::GradeTooHighException();
	if (value > 150)
		throw Form::GradeTooLowException();
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
