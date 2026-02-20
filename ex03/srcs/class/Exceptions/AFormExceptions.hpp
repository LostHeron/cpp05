/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AFormExceptions.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 11:55:17 by jweber            #+#    #+#             */
/*   Updated: 2026/02/20 13:34:47 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORMEXCEPTION_HPP
# define AFORMEXCEPTION_HPP

#include "AWorkExceptions.hpp"

class AFormExceptions: public AWorkExceptions
{
	public:
		AFormExceptions();
		virtual ~AFormExceptions() throw();
		const char * what() const throw() = 0;
};

#endif
