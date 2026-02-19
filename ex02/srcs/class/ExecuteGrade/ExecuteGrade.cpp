/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ExecuteGrade.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:44:58 by jweber            #+#    #+#             */
/*   Updated: 2026/02/19 16:05:09 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ExecuteGrade.hpp"
#include "AForm.hpp"

ExecuteGrade::ExecuteGrade(int value)
{
	if (value < 1)
		throw AForm::GradeTooHighException();
	if (value > 150)
		throw AForm::GradeTooLowException();
	this->grade = value;
}

int	ExecuteGrade::getGrade() const
{
	return (this->grade);
}

std::ostream&	operator<<(std::ostream& os, const ExecuteGrade& sg)
{
	os << sg.getGrade();
	return (os);
}
