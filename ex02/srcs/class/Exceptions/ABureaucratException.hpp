/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ABureaucratException.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 11:46:03 by jweber            #+#    #+#             */
/*   Updated: 2026/02/20 12:04:09 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABUREAUCRATEXCEPTION_HPP
# define ABUREAUCRATEXCEPTION_HPP

#include <exception>

class ABureaucratException: public std::exception
{
	public:
		ABureaucratException();
		virtual ~ABureaucratException() throw();
		virtual const char * what() const throw() = 0;
};

#endif
