/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 08:51:39 by jweber            #+#    #+#             */
/*   Updated: 2026/02/18 11:47:26 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <exception>
#include <ostream>
#include <string>

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const std::string& newName, int newGrade);
		Bureaucrat(const Bureaucrat& other);
		~Bureaucrat();

		Bureaucrat& operator=(const Bureaucrat& other);

		const	std::string&	getName() const;
		int						getGrade() const;

		Bureaucrat&	operator++(); // prefix increment
		Bureaucrat	operator++(int); // postfix increment
		Bureaucrat& operator--();
		Bureaucrat	operator--(int);

		class GradeTooHighException: public std::exception
		{
			const char * what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			const char * what() const throw();
		};

	private:
		const std::string	name;
		int					grade;
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
