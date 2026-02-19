/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:53:00 by jweber            #+#    #+#             */
/*   Updated: 2026/02/19 11:07:33 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "SignGrade.hpp"
#include "ExecuteGrade.hpp"
#include <string>

class Bureaucrat;

class Form
{
	public:
		Form(const std::string& name, int signGrade, int executeGrade);
		~Form();

		const std::string&	getName() const;
		bool				getIsSigned() const;
		const SignGrade&	getSignGrade() const;
		const ExecuteGrade&	getExecuteGrade() const;

		void				beSigned(const Bureaucrat& other);
		
		class GradeTooHighException: public std::exception
		{
			const char * what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			const char * what() const throw();
		};

		class AlreadySigned: public std::exception
		{
			const char * what() const throw();
		};

	private:
		Form();
		Form(const Form& other);
		Form& operator=(const Form& other);
		const std::string	name;
		bool				isSigned;
		const SignGrade		signGrade;
		const ExecuteGrade	executeGrade;
};

std::ostream&	operator<<(std::ostream& os, const Form& other);

#endif
