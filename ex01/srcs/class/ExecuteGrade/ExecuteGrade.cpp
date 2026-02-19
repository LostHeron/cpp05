/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ExecuteGrade.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:44:58 by jweber            #+#    #+#             */
/*   Updated: 2026/02/18 18:01:01 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ExecuteGrade.hpp"
#include "Form.hpp"

ExecuteGrade::ExecuteGrade(int value)
{
	if (value < 1)
		throw Form::GradeTooHighException();
	if (value > 150)
		throw Form::GradeTooLowException();
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
