/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AFormException.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 11:55:17 by jweber            #+#    #+#             */
/*   Updated: 2026/02/20 12:04:00 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORMEXCEPTION_HPP
# define AFORMEXCEPTION_HPP

#include <exception>

class AFormException: public std::exception
{
	public:
		AFormException();
		virtual ~AFormException() throw();
		const char * what() const throw() = 0;
};

#endif
