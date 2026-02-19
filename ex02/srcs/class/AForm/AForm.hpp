/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:53:00 by jweber            #+#    #+#             */
/*   Updated: 2026/02/19 17:05:59 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "SignGrade.hpp"
#include "ExecuteGrade.hpp"
#include <string>

class Bureaucrat;

class AForm
{
	public:
		AForm(const std::string& name, int signGrade, int executeGrade);
		virtual ~AForm();

		const std::string&	getName() const;
		bool				getIsSigned() const;
		const SignGrade&	getSignGrade() const;
		const ExecuteGrade&	getExecuteGrade() const;

		void				beSigned(const Bureaucrat& other);
		virtual void		execute(Bureaucrat const & executor) const = 0;
		
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
		AForm();
		AForm(const AForm& other);
		AForm& operator=(const AForm& other);
		const std::string	name;
		bool				isSigned;
		const SignGrade		signGrade;
		const ExecuteGrade	executeGrade;
};

std::ostream&	operator<<(std::ostream& os, const AForm& other);
std::ostream&	operator<<(std::ostream& os, const AForm *ptr_other);

#endif
