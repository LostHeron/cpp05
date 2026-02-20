/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWorkExceptions.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 13:28:46 by jweber            #+#    #+#             */
/*   Updated: 2026/02/20 13:32:37 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWORKEXCEPTIONS_HPP
# define AWORKEXCEPTIONS_HPP

#include <exception>

class AWorkExceptions: public std::exception
{
	public:
		AWorkExceptions();
		virtual ~AWorkExceptions() throw();
		virtual const char *what() const throw() = 0;
};

#endif

