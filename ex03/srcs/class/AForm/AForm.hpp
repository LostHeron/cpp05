/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:53:00 by jweber            #+#    #+#             */
/*   Updated: 2026/02/20 17:49:47 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "AFormExceptions.hpp"
#include "SignGrade.hpp"
#include "ExecuteGrade.hpp"
#include <string>

#define NB_DIFFERENT_FORMS 3

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
		
		class GradeTooHighException: public AFormExceptions
		{
			const char * what() const throw();
		};

		class GradeTooLowException: public AFormExceptions
		{
			const char * what() const throw();
		};

		class AlreadySigned: public AFormExceptions
		{
			const char * what() const throw();
		};

		class IsNotSigned: public AFormExceptions
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
